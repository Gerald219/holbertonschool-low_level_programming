#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion, followed by new line.
 * @s: The string to print
 *
 * Return: nothing(void)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
