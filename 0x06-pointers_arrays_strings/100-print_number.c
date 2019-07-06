#include "holberton.h"

/**
 * print_number - prints an integer using putchar
 * @n: integer to be printed
 */

void print_number(int n)
{
	int mult, x, k;

	x = 0;
	mult = 1;

	if (n == 0)
		_putchar('0');
	else if ( n > 0)
		n *= -1;
	else
		_putchar('-');

	while (n / mult != 0)
		mult *= 10;
	mult /= 10;
	for (; mult > 0; mult /= 10)
	{
		if (x == 0)
		{
			_putchar(-(n / mult) + '0');
			x++;
		}
		else
		{
			k = (-(n / mult) % 10);
			if (k < 0)
				k *= -1;
			_putchar(k + '0');
		}
	}
}
