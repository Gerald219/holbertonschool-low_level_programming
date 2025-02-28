#include "main.h"

/**
 * _strlen - Returns the length of a string, it counts until it reaches \0
 * @s: Pointer to the string
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return length;
}
