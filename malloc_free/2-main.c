#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Tests str_concat function.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = str_concat("Best ", "school");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}

	printf("%s\n", s);

	free(s);

	return (0);
}
