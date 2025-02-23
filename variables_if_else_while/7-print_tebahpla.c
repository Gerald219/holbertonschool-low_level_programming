#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse.
 *
 * Description: This program prints all lowercase letters from 'z' to 'a',
 * followed by a newline. Only using putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
