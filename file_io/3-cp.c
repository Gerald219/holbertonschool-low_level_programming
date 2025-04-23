#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * main - copies content of one file to another
 * @ac: argument count
 * @av: argument values
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int from_fd, to_fd, read_bytes, written;
	char buf[BUF_SIZE];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(av[1], O_RDONLY);
	if (from_fd < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	to_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd < 0)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(from_fd);
		exit(99);
	}

	while ((read_bytes = read(from_fd, buf, BUF_SIZE)) > 0)
	{
		written = write(to_fd, buf, read_bytes);
		if (written != read_bytes)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(from_fd);
			close(to_fd);
			exit(99);
		}
	}

	if (read_bytes < 0)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		close(from_fd);
		close(to_fd);
		exit(98);
	}

	if (close(from_fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}

	if (close(to_fd) < 0)
	{
		dprintf(2, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}

	return (0);
}
