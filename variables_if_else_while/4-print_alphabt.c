#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except 'q' and 'e'.
 *
 * Description: This program prints all lowercase letters from 'a' to 'z'
 * excluding 'q' and 'e', followed by new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

	{
		if (letter != 'q' && letter != 'e')
			putchar(letter);
	}

	putchar('\n');

	return (0);
}
