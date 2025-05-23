#include "main.h"

/**
 * string_toupper - Converts lowercase letters to uppercase.
 * @str: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
