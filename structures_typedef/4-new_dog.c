#include <stdlib.h>
#include <string.h>
#include "dog.h"

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	char *name_copy, *owner_copy;

	if (!name || !owner)
		return (NULL);

	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	new = malloc(sizeof(dog_t));
	if (!new)
		return (NULL);
	name_copy = malloc(strlen(name) + 1);
	if (!name_copy)
	{
		free(new);
		return (NULL);
	}
	strcpy(name_copy, name);

	owner_copy = malloc(strlen(owner) + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(new);
		return (NULL);
	}
	strcpy(owner_copy, owner);

	new->name = name_copy;
	new->age = age;
	new->owner = owner_copy;

	return (new);
}
