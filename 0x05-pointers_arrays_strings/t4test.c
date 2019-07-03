#include "holberton.h"
/**
 * print_rev - print a string in reverse followed by a new line
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	char *s1 = s;

	while (*s1 != '\0')
		s1++;
	s1--;
	for (;s1 >= s;s1--)
		_putchar(*s1);
	_putchar('\n');
}
