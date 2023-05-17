#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * **alloc_grid - allocates memory to grid
 * initialize each element of the grid to 0
 * @width: int type
 * @height: int type
 * Return: pointer to 2 Dimension array on success
 * NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int e, f;
	int **dee;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dee = malloc(height * sizeof(int *));
	if (dee == NULL)
	{
		return (NULL);
	}
	for (e = 0; e < height; e++)
	{
		dee[e] = malloc(width * sizeof(int));
		if (dee[e] == NULL)
		{
			for (f = 0; f < e; f++)
				free(dee[f]);
			free(dee);
			return (NULL);
		}
		for (f = 0; f < width; f++)
		{
			dee[e][f] = 0;
		}
	}
	return (dee);
}
