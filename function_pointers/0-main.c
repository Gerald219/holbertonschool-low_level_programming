#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name_as_is - prints a name as is
 * @name: name of the person
 *
 * Return: Nothing
 */
void print_name_as_is(char *name)
{
	printf("Hello, my name is %s\n", name);
}

/**
 * print_name_uppercase - prints a name in uppercase
 * @name: name of the person
 */

void print_name_uppercase(char *name)
{
	unsigned int i = 0;

	printf("Hello, my uppercase name is ");
	while (name[1])
	{
		if (name[i] >= 'a' && name[i] <= 'z')
			putchar(name[i] - 32);
		else
			putchar(name[i]);
		i++;
	}
	printf("\n");
}

/**
 * main - checks the code
 *
 * Return: Always 0
 */

int main(void)
{
	print_name("Bob", print_name_as_is);
	print_name("Bob dylan", print_name_uppercase);
	return (0);
}
