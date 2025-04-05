#include "lists.h"

/**
 * list_len: returns the number of elements in a list
 * @h: pointer to the head (start) of the list
 *
 * Return: total number of nodes
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
