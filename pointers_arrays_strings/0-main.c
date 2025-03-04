#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * simple_print_buffer - Prints buffer to hexadecimal format.
 * @buffer: Address of memory to print.
 * @size: Size of memory to print.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[1]);
				}
				printf("\n");
				}
/**
 * main - Tests the _memset function.
 *
 * Return: Always 0.
 */
int main(void)
{
char buffer[98] = {0x00};

printf("Before memset:\n");
simple_print_buffer(buffer, 98);

_memset(buffer, 0x01, 95);

printf("After memset:\n");
simple_print_buffer(buffer, 98);

return (0);
}
