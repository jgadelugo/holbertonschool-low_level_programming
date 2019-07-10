#include "holberton.h"

/**
 * get_length - gets length and prints charachters in reverse
 * @s: pointer to a string
 * @len: length of strin
 * @check: checks that it got to the end
 */
void get_length(char *s, int len, int check)
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
}

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: pointer to a string
 */

void _print_rev_recursion(char *s)
{
	int len = 0, check = 0;

	get_length(s, len, check);
}
