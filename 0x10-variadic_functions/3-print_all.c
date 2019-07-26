#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i = 0, n = 0;

	while (format[n])
		n++;
	va_start(valist, format);

	while (i < n)
	{
		switch (format[i])
		{
		case 'c': printf("%c", va_arg(valist, int));
			break;
		case 'i': printf("%i", va_arg(valist, int));
			break;
		case 'f':printf("%f", va_arg(valist, double));
			break;
		case 's':printf("%s", va_arg(valist, char *));
			break;
		default:
			i++;
			continue;
		}
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(valist);
}
