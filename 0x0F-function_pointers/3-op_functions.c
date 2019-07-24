#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - sum of a and b
 * @a: integer to add
 * @b: integer to add
 * Return: sum if succesful
 */

int op_add(int a, int b)
{
	return ((a) + (b));
}
/**
 * op_sub - difference of a and b
 * @a: integer to subtract
 * @b: integer to subtract
 * Return: difference if succesful
 */
int op_sub(int a, int b)
{
	return ((a) - (b));
}
/**
 * op_mul - multiply a and b
 * @a: integer to multiply
 * @b: integer to multiply
 * Return: multiplication of a and b if succesful
 */
int op_mul(int a, int b)
{
	return ((a) * (b));
}
/**
 * op_div - divides a and b
 * @a: integer to divide
 * @b: integer to divide
 * Return: division if succesful
 */
int op_div(int a, int b)
{
	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	return ((a) / (b));
}
/**
 * op_mod - Module of a and b
 * @a: integer
 * @b: integer
 * Return: remainder if succesful
 */
int op_mod(int a, int b)
{
	if (b)
		return ((a) % (b));
	printf("Error\n");
	exit(100);
}
