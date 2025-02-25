#include "main.h"

/**
 * print_square - prints a square using '#' characters.
 * @size: The size of the square (both width and height).
 *
 * Description: Prints a square of a 'size x size' using '#' characters.
 * if 'size' is 0 or less, prints only a newline.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; j++)
		{
			for (j = 0; j < size; j++)
				_putchar('#');

			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
