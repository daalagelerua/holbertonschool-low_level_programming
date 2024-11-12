#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* free_grid - free 2d grid
* @grid: double pointer on 2d array
* @height: height of grid
*
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
