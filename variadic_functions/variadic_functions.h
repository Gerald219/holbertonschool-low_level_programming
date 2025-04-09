#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * print_strings - prints strings separated by a separator
 * @separator: string to print between each string
 * @n: number of strings passed to the function
 *
 */

void print_strings(const char *separator, const unsigned int n, ...);

#endif
