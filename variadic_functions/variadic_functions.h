#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct fmt - struct for format specifiers
 * @symbol: character for the type e.g. 'c', 'i', 'f', 's'
 * @f: function pointer to handle the format
 */

typedef struct fmt {
    char symbol;
    void (*f)(va_list);
} fmt_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
