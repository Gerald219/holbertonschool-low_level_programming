#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * simple_print_buffer - Prints buffer in hex format.
 * @buffer: Memory address to print.
 * @size: Number of bytes to print.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
		{
			printf(" ");
		}
		if (!(i % 10) && i)
		{
			printf("\n");
		}
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}
/**
 * main - Tests create_array function.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *buffer;

	printf("calling create_array...\n");
	buffer = create_array(98, 'H');

	if (buffer == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}

	printf("Memory allocated sucessfully!\n");
	simple_print_buffer(buffer, 98);

	free(buffer);
	printf("Memory freed!\n");

	return (0);
}
