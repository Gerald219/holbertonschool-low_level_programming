#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9, excluding 2 and 4.
 *
 * Description: It is the implementation.Uses a loop to
 * print numbers 0-9, except 2 and 4.
 */
void print_most_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num != '2' && num != '4')
			_putchar(num);
	}

	_putchar('\n');
}
