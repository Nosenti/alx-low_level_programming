#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

int main(int argc, char *argv[]) {
	if (argc != 3) {
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	int file_from_fd = open(argv[1], O_RDONLY);
	if (file_from_fd == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	int file_to_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to_fd == -1) {
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from_fd);
		exit(99);
	}

	char buf[BUF_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(file_from_fd, buf, BUF_SIZE)) > 0) {
		bytes_written = write(file_to_fd, buf, bytes_read);
		if (bytes_written != bytes_read) {
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from_fd);
			close(file_to_fd);
			exit(99);
		}
	}

	if (bytes_read == -1) {
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from_fd);
		close(file_to_fd);
		exit(98);
	}

	if (close(file_from_fd) == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_fd);
		exit(100);
	}

	if (close(file_to_fd) == -1) {
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_fd);
		exit(100);
	}

	return (0);
}

