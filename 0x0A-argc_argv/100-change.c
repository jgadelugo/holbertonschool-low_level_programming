#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min number of coins to return change using 25, 10, 5, 2, 1
 * @argc:  the size of the argv array, the number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 1 if error 0 if success
 */

int main(int argc, char *argv[])
{
	int cents, remainder, coins;
	int quarters, dimes, nickles, twos, pennies;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
		cents = atoi(argv[1]);

	if (cents <= 0)
	{
		printf("0\n");
		return (0);
	}
	quarters = cents / 25;
	remainder = cents % 25;
	dimes = remainder / 10;
	remainder = remainder % 10;
	nickles = remainder / 5;
	remainder = remainder % 5;
	twos = remainder / 2;
	remainder = remainder % 2;
	pennies = remainder / 1;

	coins = quarters + dimes + nickles + twos + pennies;

	printf("%d\n", coins);
	return (0);
}
