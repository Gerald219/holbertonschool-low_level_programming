#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * main - Copies the content of a file to another file
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success, exits with error code on failure
 */
int main(int ac, char **av)
{
	int from_fd, to_fd, read_bytes, written;
	char buffer[BUF_SIZE];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n97\n");
		exit(97);
	}

	from_fd = open(av[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n98\n", av[1]);
		exit(98);
	}

	to_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd < 0)
	{
		dprintf(2, "Error: Can't write to %s\n99\n", av[2]);
		close(from_fd);
		exit(99);
	}

	while ((read_bytes = read(from_fd, buffer, BUF_SIZE)) > 0)
	{
		written = write(to_fd, buffer, read_bytes);
		if (written != read_bytes)
		{
			dprintf(2, "Error: Can't write to %s\n99\n", av[2]);
			close(from_fd);
			close(to_fd);
			exit(99);
		}
	}

	if (read_bytes < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n98\n", av[1]);
		close(from_fd);
		close(to_fd);
		exit(98);
	}

	if (close(from_fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n100\n", from_fd);
		exit(100);
	}

	if (close(to_fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n100\n", to_fd);
		exit(100);
	}

	return (0);
}
