#include "main.h"

/**
 * more_numbers - prints the numbers 0 - 14, ten times.
 *
 * Description: Uses nested loops to print numbers 0 - 14 ten times
 * Using _putchar function three times.
 *
 * Return: nothing (void function).
 */
void more_numbers(void)
{
	int i, num;
	char tens, ones;

	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{tens = (num / 10) + '0';
			_putchar(tens);

			}
			ones = (num % 10) + '0';
			_putchar(ones);
		}
		_putchar('\n');
	}
}
