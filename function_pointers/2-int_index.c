#include "function_pointers.h"

/**
 * int_index - searches for an interger using a comparison function
 * @array: the array of intergers
 * @size: how many elements are in the array
 * @cmp: function pointer used to compare values
 *
 * Return: index of first matching element, or -1 if gone or invalid
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
