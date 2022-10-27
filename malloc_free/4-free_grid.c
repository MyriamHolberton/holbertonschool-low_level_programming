
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "main.h"

/**
* free_grid - frees a 2 dimensional grid previously created
* @grid: input
* @height: input
*
* Return:...
*/

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}

