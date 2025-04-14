#include "lists.h"

/**
 * sum_dlistint - adds all the numbers in the list
 * @head: pointer to the first node
 *
 * Return: total sum or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
