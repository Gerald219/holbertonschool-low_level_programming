#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The main string.
 * @accept: The subtring to check.
 *
 * Return: Number of bytes in the initial segment of s consisting
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
		}
		if (*a == '\0')
			break;
		s++;
	}
	return (count);
}
