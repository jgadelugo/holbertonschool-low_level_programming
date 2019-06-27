#include "holberton.h"

/**
 * print_triangle - print backwards triangle of n size
 * @size: size of square
 */

void print_triangle(int size)
{
int x, y, k, w, t;
w = 1;
t = size;
for (y = 0; y < size; y++)
{
for (x = 0; x < (t - 1); x++)
_putchar(' ');
for (k = 0; k < w; k++)
_putchar('#');
_putchar('\n');
t--;
w++;
}
}
