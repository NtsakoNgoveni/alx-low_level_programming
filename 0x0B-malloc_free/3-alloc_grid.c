#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid-allocs a 2d arry in the heap(dynamic 2d array basically)
 * @width:columns (inner array)
 * @height:rows (array of pointers to arrays/outer array)
 * Return: a pointer to pointers
 */

int **alloc_grid(int width, int height)
{
	int i, k;
	int **grid;

	if (height <= 0 || width <= 0)
		return (NULL);

	grid = malloc(sizeof(char *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(char) * width);

		if (grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
			grid[i][k] = 0;
	}
	return (grid);
}
