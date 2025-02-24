#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @c: The character to be checked.
 *
 * Description: The function takes integer that is representinga ASCII number
 * and checks whether it is an uppercase letter (A-Z).
 *
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
