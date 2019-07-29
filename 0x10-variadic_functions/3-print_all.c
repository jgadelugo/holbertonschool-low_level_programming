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
	char * arg;

	while (format[n])
		n++;
	va_start(valist, format);

	while (i < n)
	{
		switch (format[i])
		{
		case 'c':
			if (i)
				printf(", ");
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			if (i)
				printf(", ");
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			if (i)
				printf(", ");
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			if (i)
				printf(", ");
			arg = va_arg(valist, char *);
			if (arg)
				printf("%s", arg);
			else
				printf("%p", arg);
			break;
		default:
			i++;
			continue;
		}
		i++;
	}
	printf("\n");

	va_end(valist);
}
