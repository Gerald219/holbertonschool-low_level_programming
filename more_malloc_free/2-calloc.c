#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and intializes to zero
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total_size;
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);

	for (i = 0; i < total_size; i++)
		ptr[i] = 0;
	return (ptr);
}
