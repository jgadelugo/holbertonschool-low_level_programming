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
	unsigned int i = 0, middle = 0;
	char *arg;

	va_start(valist, format);

	while (format && format[i])
	{
		if (middle)
			printf(", ");
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%i", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			arg = va_arg(valist, char *);
			if (arg)
			{
				printf("%s", arg);
				break;
			}
			printf("%p", arg);
			break;
		default:
			middle = 0;
			i++;
			continue;
		}
		middle = 1;
		i++;
	}
	printf("\n");
	va_end(valist);
}
