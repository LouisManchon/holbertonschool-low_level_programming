#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensionnal array previously created
 * by the alloc_grid function
 * @grid: pointed grid
 * @height: height of the array
 *
 * No return
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
