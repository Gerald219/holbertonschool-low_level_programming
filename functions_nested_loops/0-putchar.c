#include "main.h"

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
		_putchar(text[i]);

	_putchar('\n');

	return (0);
}
