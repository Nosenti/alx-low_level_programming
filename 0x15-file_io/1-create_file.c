#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: what to write on the file
 * Return: 1(success) or -1(failure)
 */

int create_file(const char *filename, char *text_content)
{
	if (!filename)
	{
		return (-1);
	}
	int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		ssize_t text_length = 0;

		while (text_content[text_length] != '\0')
		{
			text_length++;
		}
		if (text_length > 0)
		{
			ssize_t write_bytes = write(fd, text_content, text_length);

			if (write_bytes != text_length)
			{
				close(fd);
				return (-1);
			}
		}
	}
	close(fd);
	return (1);
}
