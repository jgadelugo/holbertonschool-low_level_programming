#include "holberton.h"

/**
 * print_diagonal - print a straight line using putchar of n size
 * @n: size of line
 */

void print_diagonal(int n)
{
int x;
int y;
for (y = 0; y < n; y++)
{
for (x = y; x > 0; x--)
_putchar(' ');
_putchar('\\');
_putchar('\n');
}
}
