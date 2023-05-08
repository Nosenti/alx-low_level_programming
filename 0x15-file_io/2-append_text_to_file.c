#include "main.h"

/**
 * append_text_to_file - appending text to file
 * @filename: name of the file
 * @text_content: content
 * Return: 1(success) or -1(failure)
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t text_length;

	if (!filename)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		text_length = 0;

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

