#include "main.h"
#include <stdio.h>

/**
 * main - check the code for encoding a string into 1337.
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[] = "Expected the best. Prepare for the worst. "
		"Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}
