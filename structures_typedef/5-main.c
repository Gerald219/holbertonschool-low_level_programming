#include <stdio.h>
#include "dog.h"

int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	printf("My name is %s, and i am %.1f :) - Woof!\n", my_dog->name, my_dog->age);
	free_dog(my_dog);

		return (0);
}
