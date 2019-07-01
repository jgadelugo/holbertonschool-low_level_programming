#include "holberton.h"
/**
 * print_rev - print a string in reverse followed by a new line
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i;
	i = 1;
	
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
	
