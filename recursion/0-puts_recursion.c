#include "main.h"

/**
 * _puts_recursion - Prints a string using recursion
 * @str: The string to print
 *
 * Return: nothing(void)
 */
void _puts_recursion(char *str)
{
	if (*str == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*str);
	_puts_recursion(str + 1);
}
