#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: numbers the amount of repetitions of _ should be printed.
 *
 * Description: Prints a line of underscores (_) based on n.
 * If n is 0 or less it prints a new line.
 *
 * Return: Nothing (void function).
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}

	_putchar('\n');
}
