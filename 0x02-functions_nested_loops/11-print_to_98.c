#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - count to 98
 * @n: variable to determine if input is greater than, less than or is 98
 *
 */

void print_to_98(int n)
{
if (n > 98)
{
for (; n >= 98; n--)
{
printf("%d", n);
if (n != 98)
printf(", ");
else
printf("\n");
}
}
else if (n < 98)
{
for (; n <= 98; n++)
{
printf("%d", n);
if (n != 98)
printf(", ");
else
printf("\n");
}
}
else
{
printf("%d\n", n);
}
}
