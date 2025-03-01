#include "main.h"

/**
 * rev_string - Reverses a string in place
 * @s: Pointer to the string
 */
void rev_string(char *s)
{
	int length = 0, start = 0;
	char temp;

	while (s[length] != '\0') /* Find string length */
		length++;

	length--; /* Adjust for last character */

	while (start < length) /* Swap characters */
	{
		temp = s[start];
		s[start] = s[length];
		s[length] = temp;
		start++;
		length--;
	}
}
	
