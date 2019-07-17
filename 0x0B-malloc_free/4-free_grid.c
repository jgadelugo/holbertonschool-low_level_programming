#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid/array
 * @grid: two dimensional grid/array
 * @height: rows
 */

void free_grid(int **grid, int height)
{
	int row;

	for (row = 0; row < height; row++)
		free(grid[row]);

	free(grid);
}
