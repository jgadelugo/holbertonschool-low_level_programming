#include "holberton.h"

/**
  * flip_bits - count bits you need to flip to get from one number to another
  * @n: first number
  * @m: second number
  * Return: number of flips to get from one number to the other
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, check, check1;

	check = (n ^ m);
	check1 = (m ^ n);
	while (check || check1)
	{
		count += (check & 1 || check1 & 1);
		check >>= 1;
		check1 >>= 1;
	}
	return (count);

}
