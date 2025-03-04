#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: The string to search.
 * @accept: The set of characters to match.
 *
 * Return: Pointer to the first matching byte in s, or NULL if no match.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
				return (s);
		}
		s++;
	}
	return (NULL);
}
