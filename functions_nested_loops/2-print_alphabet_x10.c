#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabet 10 times,
 * each on its own line.
 *
 * Description: This function loops 10 times, printing lowercase letters
 * from 'a' to 'z' using only _putchar. Each iteration prints a new line
 * at the end.
 *
 * Return: void (no return value)
 */
void print_alphabet_x10(void)
{
	int i;
	char letter;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);

		_putchar('\n');
	}
}
