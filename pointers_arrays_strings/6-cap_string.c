#include "main.h"

/**
 * cap_string - Capitalizes words in a string.
 * @str: The input string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i, j;
	int cap_next = 1;
	char separators[] = " \t\n,;.!?\"(){}";

	i = 0;
	while (str[i] != '\0')
	{
		if (cap_next && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;

		cap_next = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				cap_next = 1;
				break;
			}
		}
		i++;
	}
	return (str);
}
