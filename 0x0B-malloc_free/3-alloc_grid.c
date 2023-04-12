#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function to return a pointer to a 2D array of integers
 * @width: Dimension a
 * @height: Dimension b
 *
 * Return: NULL when width or height is 0
 */

int **alloc_grid(int width, int height)
{
	int **grid, a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = malloc(sizeof(int) * width);

		if (grid[a] == NULL)
		{
			for (; a >= 0; a--)
				free(grid[a]);

			free(grid);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			grid[a][b] = 0;
	}
	return (grid);
}
