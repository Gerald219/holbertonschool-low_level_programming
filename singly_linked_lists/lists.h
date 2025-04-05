#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: a malloc string, can represent (NULL)
 * @len: the length of the string
 * @next: pointer to the next node in the list, or NULL if gone
 * struct list_s: info about one item in the list
 *
 * Description: node structure for a singly linked list
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);

#endif
