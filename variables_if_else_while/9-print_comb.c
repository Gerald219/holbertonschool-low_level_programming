#include <stdio.h>

/**
 * main - prints all single-digit numbers separated by", ".
 *
 * Description: prints numbers from 0 to 9, seperated by commas
 * and spaces, followed by a newline, using only putchar () 3 times.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)

	{
		putchar(num + '0');

		if (num < 9)
		{
			putchar(',');
			putchar(',');
		}
	}

	putchar('\n');

	return (0);
}
