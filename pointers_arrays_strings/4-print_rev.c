#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: Pointer to the string
 */
void print_rev(char *s)

{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	length--;

	while (length >= 0)
	{
		_putchar(s[length]);
		length--;
	}

	_putchar('\n');
}
