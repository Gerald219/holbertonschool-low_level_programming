#include "main.h"

/**
 * print_numbers - prints numbers from 0 - 9, followed by a new line.
 *
 * Description:
 *
 * Return: 
 */
void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		_putchar(num);

	_putchar('\n');
}
