#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a doubly linked list from memory
 * @head: pointer to the first node in the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
