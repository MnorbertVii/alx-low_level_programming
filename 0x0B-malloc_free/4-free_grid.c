#include <stdlib.h>
#include "main.h"


/**
 * free_grid - frees a 2 dimensional grid
 * @grid: the grid
 * @height: height of the grid
 *
 */
void free_grid(int **grid, int height)
{
	int c;

	for (c = 0; c < height; c++)
		free(grid[c]);
	free(grid);
}
