#include <unistd.h>

/**
 * _putchar - Writes a single character to standard output
 * @c: The character to print
 *
 * Return:on success, 1. on error, -1 is returned.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
