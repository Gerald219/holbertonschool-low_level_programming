#include "main.h"

/**
 * main - Tests the print_last_digit function.
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);  /* Should print 8 */
    print_last_digit(0);   /* Should print 0 */
    r = print_last_digit(-1024); /* Should print 4 */
    _putchar('0' + r);  /* Print return value */
    _putchar('\n');  /* New line */
    return (0);
}
