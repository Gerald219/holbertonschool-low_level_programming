#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * create_array - Creates an array of chars and initializes it with a spesific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 *
 * Return: Pointer to the array, or NULL if allocation fails.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	printf("Inside create_array. Request size: %u\n", size);

	if (size == 0)
	{
		printf("Size is 0, returning NULL.\n");
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
		printf("malloc() failed!\n");
		return (NULL);
	}

	printf("Memory successfully allocated!\n");

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
