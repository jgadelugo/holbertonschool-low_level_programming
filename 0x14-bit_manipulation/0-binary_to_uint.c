#include "holberton.h"

/**
  * binary_to_uint - vonverts a binary number to an unsigned int
  * @b: binary number
  * Return: the converted number or 0 if it fails
  */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, place;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;
	len--;
	for (place = 1, uint = 0; len >= 0; len--)
	{
		if (b[len] == '0')
		{
			place *= 2;
			continue;
		}
		else if(b[len] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
