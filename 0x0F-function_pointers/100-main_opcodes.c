#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the opcodes of its own main function
 * @argc: number of elements in argv
 * @argv: arguments
 * Return: 0 if succesful
 */

int main(int argc, char *argv[])
{
	int arg, i;
	unsigned char *pf;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	arg = atoi(argv[1]);
	if (arg < 0)
	{
		printf("Error\n");
		exit(2);
	}
	pf = (unsigned char *)main;
	for (i = 0; i < (arg - 1); i++)
	{
		printf("%02x ", pf[i]);
	}
	printf("%02x", pf[i]);
	printf("\n");
	return (0);
}
