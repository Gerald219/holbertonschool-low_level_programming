#include <stdlib.h>

/**
 * array_range - Creates an array of intergers from min to max.
 * @min: The smallest interger in the array.
 * @max: The largest interger in the array.
 *
 * Return: pointer to the newly created array, or NULL if error.
 */
int *array_range(int min, int max)
{
	int size;
	int *array;
	int i;

	if (min > max)
		return (NULL);


	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
