#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_char - prints a char
 * @args: va_list
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - prints an int
 * @args: va_list
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";

	typedef struct fmt
	{
		char symbol;
		void (*f)(va_list);
	} fmt_t;

	fmt_t formats[] = {
		{'c', print_char}, {'i', print_int},
		{'f', print_float}, {'s', print_string},
		{0, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (formats[j].symbol)
		{
			if (format[i] == formats[j].symbol)
			{
				printf("%s", separator);
				formats[j].f(args);
				separator = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
