#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0 if succesfull
 */

int main(void)
{
	long int a, b, c, d;

	b = 1;
	c = 2;
	d = 3;

	for (a = 0; a < 50; a++)
	{
		if (a != 49)
			printf("%ld, ", b);
		else
			printf("%ld\n", b);
		d = c + d;
		c = b + c;
		b = d - c;
	}
	return (0);
}
