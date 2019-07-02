#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 *
 *
 */

int _atoi(char *s)
{
	int num, len, count, mult, x, neg;

	len = 0;
	x = 0;
	count = 0;
	mult = 1;
	neg = 1;
	num = 0;
	
	while (s[len] != '\0')
		len++;
	len--;
	count = len;
	while (count > 0)
	{
		mult *= 10;
		count--;
	}
	for (;x < len; x++)
	{
		if (s[x] == '-')
			neg *= -1;
		else if (s[x] == ' ' || s[x] == '+')
			neg *= 1;
		else if (s[x] <= '9' && s[x] >= '0')
			num += s[x] * mult;
		mult /= 10;
	}
	if (neg != 1)
		num *= -1;
	return (num);
}
