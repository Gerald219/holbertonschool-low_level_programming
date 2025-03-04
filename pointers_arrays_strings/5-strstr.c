#include "main.h"
#include <stddef.h>

/**
 * strstr - Locates a substring ina string.
 * @haystack: The main string to search in.
 * @needle: The substring to find.
 *
 * Return: Pointer to the first occurence of needle in haystack,
 * or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);

		haystack++;
	}
	return (NULL);
}
