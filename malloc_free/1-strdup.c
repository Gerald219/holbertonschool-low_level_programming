#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string into a newly allocated memory
 * space.
 * @str: The string to duplicate.
 *
 * Return: Pointer to the duplicated string, or NULL if memory
 * allocation fails.
 */
char *_strdup(char *str)
{
	char *copy;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);
	while (str[length] != '\0')
		length++;

	copy = malloc(sizeof(char) * (length + 1));
	if (copy == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		copy[i] = str[i];
	copy[length] = '\0';

	return (copy);
}
