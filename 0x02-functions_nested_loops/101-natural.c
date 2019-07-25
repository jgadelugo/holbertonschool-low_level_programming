#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 * Return: 0 if succesful
 */

int main(void)
{
	int sum, i;

	for (i = 1023, sum = 0; i; i--)
		if (!(i % 3) || !(i % 5))
			sum += i;
	printf("%d\n", sum);
	return (0);
}
