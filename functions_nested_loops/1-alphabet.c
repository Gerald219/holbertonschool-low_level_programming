#include "main.h"

/**
 * print_Alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: Uses a loop to print 'a' to 'z' using _putchar.
 * then after adds a new line to format correctly.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}
