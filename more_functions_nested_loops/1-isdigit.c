#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0-9).
 * @c: The character to check. 
 *
 * Description: The function is to process an integer that is representing
 * an ASCII character and checks if it's a digit (0-9).
 *
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
} 
