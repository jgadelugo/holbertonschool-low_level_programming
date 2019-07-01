#include "holberton.h"
/**
 * rev_string - print a string in reverse followed by a new line
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int i, x, y;
	char *hold = s;

	i = 0;
	x = 0;
	y = 0;

	while (s[i] != '\0')
		i++;
	char rev[i];

	while (y <= i)
	{
		rev[y] = s[y];
		y++;
	}
	i -= 1;

	while (i >= 0)
	{
		hold[x] = rev[i];
		x++;
		i--;
	}
	s = hold;
}
