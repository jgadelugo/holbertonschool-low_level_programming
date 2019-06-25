#include "holberton.h"

/**
 * jack_bauer - prints out every minute of the day
 *
 */

void jack_bauer(void)
{
int x, y, z, k;

for (x = '0'; x <= '2'; x++)
{
for (y = '0'; y <= '9'; y++)
{
for (z = '0'; z < '6'; z++)
{
for (k = '0'; k <= '9'; k++)
{
if ((x == '2') && (y >= '4'))
{
continue;
}
else
{
_putchar(x);
_putchar(y);
_putchar(':');
_putchar(z);
_putchar(k);
_putchar('\n');
}
}
}
}
}
}
