#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional grid
 * this grid was previously created by the alloc_grid
 * function in your 3-alloc_grid file
 * @grid: pointer to grid of int type
 * @height: int type
 * Return: nothing
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
