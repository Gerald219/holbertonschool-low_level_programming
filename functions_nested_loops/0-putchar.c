#include <stdio.h>

/**
 * main - prints "_putchar" followed by new line.
 *
 * Description: uses putchar() to print each character
 * in "_putchar" one by one.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; text[i] != '\0'; i++)
		putchar(text[i]);

	putchar('\n');

	return (0);
}
