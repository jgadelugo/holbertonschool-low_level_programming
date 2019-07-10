#include "holberton.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to a string
 */
int get_length(char *s, int len, int check)
{
	if (*(s + len) != '\0' && check == 0)
	{
		len++;
		get_length(s, len, check);
	}
	else if (len > 0)
	{

		check++;
		_putchar(*(s + len));
		len--;
		get_length(s, len, check);
	}
	else
		_putchar('\n');
	return (len);
}

void _print_rev_recursion(char *s)
{
	int len = 0, check = 0;

	len = (get_length(s, len, check) - 1);
}


			
