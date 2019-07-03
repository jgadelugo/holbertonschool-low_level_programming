#include "holberton.h"

/**
 * rev_string - print a string in reverse followed by a new line
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char *s1 = s;
	char *s2 = s;
	char temp;

	while (*s2 != '\0')
		s2++;
	s2--;
	for (; s2 > s1; s2--)
	{
		temp = *s2;
		*s2 = *s1;
		*s1 = temp;
		s1++;
	}
}
