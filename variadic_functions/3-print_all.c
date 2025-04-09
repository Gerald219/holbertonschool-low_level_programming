#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str;
	va_list args;
	char *sep = " ";

	va_start(args, format);

		while (format && format[i])
		{
			if (format[i] == 'c' || format[i] == 'i' ||
			format[i] == 'f' || format[i] == 's')
			{
				printf("%s", sep);
				if (format[i] == 'c')
					printf("%c", va_arg(args, int));
				if (format[i] == 'i')
					printf("%d", va_arg(args, int));
				if (format[i] == 'f')
					printf("%f", va_arg(args, double));
				if (format[i] == 's')
				{
					str = va_arg(args, char *);
					if (str)
						printf("%s", str);
					else
						printf("(nil)");
				}
				sep = ", ";
			}
			i++;
		}
	va_end(args);
	printf("\n");
}
