#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: pointer to first interger
 * @b: Pointer to second interger
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
