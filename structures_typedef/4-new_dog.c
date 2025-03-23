#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog_t, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	
	while (name[name_len] != '\0')
		name_len++;

	while (owner[owner_len] != '\n')
		owner_len++;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(name_len + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}

	new->owner = malloc(owner_len + 1);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}

	for (i = 0; i <= name_len; i++)
		new->name[i] = name[i];
	for (i = 0; i <= owner_len; i++)
		new->owner[i] = owner[i];

	new->age = age;

	return (new);
}
