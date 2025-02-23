#include <stdio.h>

/**
 *main - Prints the alphabet in lowercase and then uppercase.
 *
 *Description:this program prints lowercase letters (a-z) followed by
 *uppercase letters (A-Z) using putchar only three times.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

		return (0);
}
