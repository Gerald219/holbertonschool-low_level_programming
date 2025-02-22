#include <stdio.h>

/**
 * main - Prints the alphabet lowercase.
 *
 * Description: Uses putchar function to print the alphabet letters from 'a'
 * to 'z' followed by new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
