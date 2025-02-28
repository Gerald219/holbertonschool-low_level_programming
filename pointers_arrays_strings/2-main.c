#include "main.h"
#include <stdio.h>

/**
 * main - Test _strlen function
 *
 * Return: Always 0.
 */
int main(void)
{
	char *str;
	int len;

	str = "My first strlen";
	len = _strlen(str);
	printf("Length: %d\n", len);

	return (0);
}
