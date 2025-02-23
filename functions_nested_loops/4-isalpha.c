#include "main.h"

/**
 * _isalpha - checks if a character is an alphabetic letter
 * @c: The character to check. 
 *
 * Return: 1 if c is a letter, 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
