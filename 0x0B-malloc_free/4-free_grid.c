#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2 dimension array
 * @grid: 2d grid
 * @height: height dimension of grid
 * Description: frees memory of grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(grid[k]);
	}

	free(grid);

}
