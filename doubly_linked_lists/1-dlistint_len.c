#include "lists.h"

/**
 * dlistint_len - Counts the number of nodes in a doubly linked list
 * @h: pointer to the start of list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
