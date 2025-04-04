#include "main.h"
#include <limits.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The extracted integer or 0 if no numbers are found
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, found_number = 0;
	long result = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			sign *= 1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			result = (result * 10) + (s[i] - '0');
			found_number = 1;

			if (result * sign > INT_MAX)
				return (INT_MAX);
			if (result * sign < INT_MIN)
				return (INT_MIN);
		}
		else if (found_number == 1)
			break;

		i++;
	}

	return ((int)(result * sign));
}
