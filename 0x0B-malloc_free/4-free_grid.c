#include "main.h"
#include <stdlib.h>
/**
 * free_grid- frees a two dimensional dimensional
 * @grid:the 2d array that must be freed
 * @height:size is the numeber of pointers to arrays
 * Return:void
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
