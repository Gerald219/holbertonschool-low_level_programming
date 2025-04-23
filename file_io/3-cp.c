#include "main.h"
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * main - Copies content from one file to another
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success, exits with error code if failure
 */
int main(int ac, char **av)
{
	int from_fd, to_fd, r, w;
	char buffer[BUF_SIZE];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	to_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(from_fd);
		exit(99);
	}

	while ((r = read(from_fd, buffer, BUF_SIZE)) > 0)
	{
		w = write(to_fd, buffer, r);
		if (w != r)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(from_fd);
			close(to_fd);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		close(from_fd);
		close(to_fd);
		exit(98);
	}

	if (close(from_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}

	if (close(to_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}

	return (0);
}
