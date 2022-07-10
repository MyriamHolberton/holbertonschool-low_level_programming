#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Free a 2D grid
 * @grid: input.
 * @height: input.
 *
 * Return: Always 0.
 */

void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || height == 0)
		return;
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
