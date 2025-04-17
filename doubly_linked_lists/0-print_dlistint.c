#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements in a body doubly linked list
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	int safety = 100;

	while (h != NULL && safety--)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	if (safety == 0)
		printf("! Warning: possible infinite loop REALLY NOW detected man!\n");
	return (count);
}
