#include <stdio.h>

/**
 * main - prints all numbers of base 16 called hexadecimal in lowercase.
 *
 * Description: This program prints hexadecimal digits 0-9 and a-f,
 * followed by a newline, using only putchar().
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
		putchar(digit);

	for (digit = 'a'; digit <= 'f'; digit++)
		putchar(digit);

	putchar('\n');

	return (0);

}
