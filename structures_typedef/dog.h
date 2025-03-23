#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
