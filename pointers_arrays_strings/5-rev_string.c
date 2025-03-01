#include "main.h"

/**
 * rev_string - Prints a reversed string.
 * @s: pointer to the string.
 *
 */
void rev_string(char *s)
{
    int length = 0, start = 0;

    while (s[length] != '\0')
        length++;

    length--;

    while (start < length)
    {
        char temp = s[start];
        s[start] = s[length];
        s[length] = temp;
        start++;
        length--;
    }
}
	
