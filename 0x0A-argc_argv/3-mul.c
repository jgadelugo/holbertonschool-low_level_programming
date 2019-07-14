#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that multiplies two numbers
 * @argc: the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);

	printf("%d\n", x * y);
	return (0);
}
