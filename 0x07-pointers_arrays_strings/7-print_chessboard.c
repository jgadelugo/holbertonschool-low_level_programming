#include "holberton.h"

/**
 * print_chessboard - print chessboard
 * @a: 8 by 8 array
 */

void print_chessboard(char (*a)[8])
{
	int x, i = 0;

	for (x = 0; x < 8; x++)
	{
		_putchar(a[i][x]);
		if (x == 7 && i < 7)
		{
			i++;
			x = -1;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
