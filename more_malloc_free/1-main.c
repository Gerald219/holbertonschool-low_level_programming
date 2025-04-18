#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Tests string_nconcat function
 *
 * Return: Always 0.
 */

int main(void)
{
	char *concat;

	concat = string_nconcat("Best ", "School !!!", 4);
	printf("%s\n", concat);
	free(concat);

	concat = string_nconcat("", "Hello", 12);
	printf("%s\n", concat);
	free(concat);

	return (0);
}
