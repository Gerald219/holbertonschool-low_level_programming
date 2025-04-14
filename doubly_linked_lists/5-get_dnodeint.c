#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at a specific index in a list
 * @head: pointer to the first node
 * @index: the position we're looking for starts from 0
 *
 * Return: pointer to the node, or NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL);
}
