#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - puts a new numbers into the list at a spesific spot
 * @h: address of the firs node in the list
 * @idx: the spot(index) where the number should be placed
 * @n: the number to be inserted
 *
 * Return: the new node address, or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;

	current->next->prev = new;
	current->next = new;

	return (new);
}

