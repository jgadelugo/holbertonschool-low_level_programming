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

	if (!n)
		return;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(valist, char *));
		if (i != n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
