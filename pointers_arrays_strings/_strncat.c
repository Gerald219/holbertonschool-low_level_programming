#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: The base string
 * @src: The string to append
 * @n: The max number of character to copy
 *
 * Return: *_strncat(char *dest, char *src, int n)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);
}
