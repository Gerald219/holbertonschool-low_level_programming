#include "main.h"

/**
 * print_Alphabet - Prints the alphabet in lowercase, followed by a new line.
 *
 * Description: Function uses a loop through the lowercase letters
 * from 'a' to 'z' and prints them using _putchar.
 * It then prints a newline for proper formatting.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');

}
