#include "function_pointers.h"

/**
 * array_iterator - Runs a function on each element of an array
 * @array: The array of numbers
 * @size: how many elements in the array
 * @action: Function pointer to apply to each element
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
