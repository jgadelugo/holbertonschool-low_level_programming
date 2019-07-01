#include "holberton.h"
/**
 * print_times_table - prints out the n times table, starting with 0
 * @n: times table
 */
void print_times_table(int n)
{
int x, y, z, k, t;

	for (x = 0; x <= n; x++)
	{
		for (y = 0; y <= n; y++)
		{
			z = x * y;
			if (z == 0 && y == 0)
				_putchar(z + '0');
			else if (z > 99)
			{
				k = z % 10;
				t = (z / 10) % 10;
				z /= 100;
				_putchar(',');
				_putchar(' ');
				_putchar(z + '0');
				_putchar(t + '0');
				_putchar(k + '0');
			}
			else if (z > 9)
			{
				k = z % 10;
				z /= 10;
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
				_putchar(k + '0');

			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
		}
		_putchar('\n');
	}
}
