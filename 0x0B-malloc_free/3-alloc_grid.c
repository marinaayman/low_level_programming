#include "main.h"
#include <stdlib.h>

/**
  * alloc_grid- returns a pointer to
  *             a 2 dimensional array of integers.
  * @width: the width of the grid.
  * @height: the height of the grid.
  * Return: NULL on failure
  *         or If width or height is 0 or negative.
  *         pointer on success.
  */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
