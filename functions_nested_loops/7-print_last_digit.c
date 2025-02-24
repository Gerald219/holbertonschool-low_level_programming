#include "main.h"

/**
 * print_last_digit - Prints and returns the last digit of a number.
 * @n: The number to process.
 *
 * Return: The last digit of the number.
 */
int print_last_digit(int n)
{
    int last_digit;

    last_digit = n % 10;  /* Get last digit */
    if (last_digit < 0)
        last_digit = -last_digit;  /* Convert negative last digit to positive */

    _putchar(last_digit + '0');  /* Print the last digit */
    return (last_digit);  /* Return the last digit */
}
