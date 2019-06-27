#include "holberton.h"

/**
 * print_line - print a straight line using putchar of n size
 * @n: size of line
 */

void print_line(int n)
{
for (; n > 0; n--)
_putchar('_');
_putchar('\n');
}
