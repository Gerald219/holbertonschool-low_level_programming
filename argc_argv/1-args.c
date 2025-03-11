#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: The argument count.
 * @argv: The argument vector (array of command-line arguments).
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
