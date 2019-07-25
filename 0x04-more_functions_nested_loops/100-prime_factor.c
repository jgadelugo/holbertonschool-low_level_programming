#include <stdio.h>

/**
 * main - print largest prime factor
 * Return: 0 if succesful
 */

int main(void)
{
	long int i, j, lp, num = 612852475143;
	int prime;

	for (i = 2; i < num / 2; i++)
	{
		prime = 1;
		if (num % i == 0)
			lp = num / i;

		for (j = 2; j < lp / 2; j++)
			if (lp % j == 0)
			{
				prime = 0;
				break;
			}
		if (prime)
		{
			printf("%ld\n", lp);
			break;
		}
	}
	return (0);
}
