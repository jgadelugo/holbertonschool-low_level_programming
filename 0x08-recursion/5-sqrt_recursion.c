#include "holberton.h"

/**
 * help - helps sqrt function find sqrt
 * @n: needs to be sqrt
 * @x: sqrt of n
 * Return: natural sqrt of n
 */

int help(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (help(n, ++x));
	return (-1);
}

/**
 * _sqrt_recursion - get the natural sqrt of n
 * @n: integer
 * Return: natural sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (help(n, 1));
}

