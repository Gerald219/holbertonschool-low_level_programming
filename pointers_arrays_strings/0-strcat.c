#include "main.h"

/**
 * _strcat - Adds src string to the end of dest.
 * @dest: The main string
 * @src: The string to add
 *
 * Return: Pointer to the updated dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src [j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
