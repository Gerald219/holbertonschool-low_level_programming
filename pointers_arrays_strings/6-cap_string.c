#include "main.h"
#include <string.h> /* For strchr */

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: The pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int cap_next = 1; 
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i] != '\0')
	{
		if (cap_next && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
		cap_next = (strchr(separators, str[i]) != NULL);
		i++;
	}
	return (str);
}
