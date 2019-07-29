#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: to be printed between the strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *arg;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		arg = va_arg(valist, char *);
		if (arg)
			printf("%s", arg);
		else
			printf("%p", arg);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
