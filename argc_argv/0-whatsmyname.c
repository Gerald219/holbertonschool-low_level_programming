#include <stdio.h>

/**
 * main - Prints the program's name.
 * @argc: Argument count (not used).
 * @argv: Argument vector (array of command-line arguments).
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
