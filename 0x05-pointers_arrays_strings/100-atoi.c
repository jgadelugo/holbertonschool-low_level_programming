#include "holberton.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integers in a string
 */

int _atoi(char *s)
{
	int num, len, numcount, mult, x, neg;

	len = 0;
	x = 0;
	numcount = 0;
	mult = 1;
	neg = 0;
	num = 0;

	while (s[len] != '\0')
	{
		if (s[len] >= '0' && s[len] <= '9')
		{
			numcount++;
			if (!(s[len + 1] >= '0' && s[len + 1] <= '9'))
				break;
		}
		len++;
	}
	while (numcount > 1)
	{
		mult *= 10;
		numcount--;
	}
	for (; x <= len; x++)
	{
		if (s[x] == '-')
			neg += -1;
		else if (s[x] == '+')
			neg += 1;
		else if (s[x] <= '9' && s[x] >= '0')
		{
			num += (s[x] - '0') * mult;
			mult /= 10;
		}
	}
	if (neg < 0)
		num *= -1;
	return (num);
}
