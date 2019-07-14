#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * chartoint - function that checks array of characters for integers
 * @c: array of characters
 * Return: 0 if successful, -1 if fails
 */
int chartoint(char *c)
{
	if (*c == '0')
		return (0);
	else if (strtol(c, 0, 10) == 0)
		return (-1);
	return (strtol(c, 0, 10));
}
/**
 * main - function that multiplies two numbers
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if successful
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1, sum = 0; i < argc; i++)
	{
		if (chartoint(argv[i]) > -1)
			sum += chartoint(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

