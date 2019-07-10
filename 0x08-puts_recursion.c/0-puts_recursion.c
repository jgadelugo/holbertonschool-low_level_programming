#include "holberton.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to a string
 */

void _puts_recursion(char *s)
{
	char *s1 = s;

	if (*s1 != '\0')
	{
		_putchar(*s1);
		s1++;
		_puts_recursion(s1);
	}
	else
		_putchar('\n');
}
