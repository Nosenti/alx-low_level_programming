#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: filename provided
 * @letters: number of letters that should be printed
 * Return: actual number of letters it could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t read_bytes;
	ssize_t write_bytes;

	if (!filename)
	{
		return (0);
	}

	fp = fopen(filename, "r");

	if (!fp)
	{
		return (0);
	}

	buffer = (char *)malloc(letters + 1);

	if (!buffer)
	{
		fclose(fp);
		return (0);
	}
	read_bytes = fread(buffer, sizeof(char), letters, fp);

	if (ferror(fp))
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	buffer[read_bytes] = '\0';
	write_bytes = fwrite(buffer, sizeof(char), read_bytes, stdout);

	if (write_bytes != read_bytes)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (write_bytes);
}

