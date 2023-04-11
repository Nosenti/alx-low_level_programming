#include "main.h"

/**
 * main - copies the content from one file to another
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 on success
 */

int main(int argc, char *argv[]) {
	int file1, file2, read_count, close1, close2;
	char buffer[1024];

	if (argc != 3) {
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(argv[1], O_RDONLY);
	if (file1 < 0) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file2 = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	while ((read_count = read(file1, buffer, 1024)) > 0) {
		if (file2 < 0 || (write(file2, buffer, read_count) != read_count)) {
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (read_count < 0) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close1 = close(file1);
	if (close1 < 0) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file1);
		exit(100);
	}
	close2 = close(file2);
	if (close2 < 0) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file2);
		exit(100);
	}
	return 0;
}

