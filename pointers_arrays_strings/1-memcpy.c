#include "main.h"

/**
 * _memcpy - Copies memory from source to destination.
 * @dest: Destination memory where bytes are copied.
 * @src: Source memory from where bytes are taken.
 * @n: Number of bytes to copy.
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
