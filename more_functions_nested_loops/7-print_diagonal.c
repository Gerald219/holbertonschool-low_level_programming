#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using '\' in the terminal.
 * @n: Number of times '\' is printed, with increasing spaces before each.
 *
 * Description: Prints a diagonal pattern using '\' and spaces.
 * If 'n' is 0 or less, it prints only a newline.
 *
 * Return: nothing (void).
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');

			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
