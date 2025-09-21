#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
void error_file(int from_fd, int to_fd, char *argv[]);

/**
 * close_file - Closes file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * error_file - Checks if files can be opened.
 * @from_fd: File descriptor of the file to copy from.
 * @to_fd: File descriptor of the file to copy to.
 * @argv: Arguments vector.
 */
void error_file(int from_fd, int to_fd, char *argv[])
{
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd, err_close;
	ssize_t nchars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(argv[1], O_RDONLY);
	to_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_file(from_fd, to_fd, argv);

	nchars = 1024;
	while (nchars == 1024)
	{
		nchars = read(from_fd, buf, 1024);
		if (nchars == -1)
			error_file(-1, 0, argv);
		if (nchars > 0)
		{
			nwr = write(to_fd, buf, nchars);
			if (nwr == -1)
				error_file(0, -1, argv);
		}
	}

	err_close = close(from_fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}

	err_close = close(to_fd);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}

	return (0);
}
