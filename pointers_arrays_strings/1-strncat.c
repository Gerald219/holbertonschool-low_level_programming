#include "main.h"

/**
 * _strncat - Takes a base string and adds up to 'n' characters from another
 * string from 'src'.
 * @dest: The destination string.
 * @src: The source string.
 * @n: The number of bytes to copy from 'src'.
 * Return: Pointer to the destination string 'dest'.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
