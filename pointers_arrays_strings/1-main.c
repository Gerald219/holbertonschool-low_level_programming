#include "main.h"
#include <stdio.h>

/**
 * main - check the swap function
 * Return: Always 0. 
 */
int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;

	printf("Befoe swap: a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("After swap: a=%d, b=%d\n", a, b);
	
	return (0);
}
