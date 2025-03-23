#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct dog - info about a dog
 * @name: dog's name (string)
 * @age: dog's age (float)
 * @owner: dog's owner name (string)
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t; 

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
