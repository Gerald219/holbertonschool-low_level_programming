#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet speak).
 * @s: The input string to modify.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *s)
{
    int i, j;
    char letters[] = "aAeEoOtTlL";
    char leet_nums[] = "4433007711";

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; letters[j] != '\0'; j++)
        {
            if (s[i] == letters[j])
            {
                s[i] = leet_nums[j];
                break;
            }
        }
    }
    return (s);  /* Return modified string */
}
