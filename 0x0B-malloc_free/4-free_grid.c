#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function to free a 2D grid created by alloc_grid function
 * @grid: Inteeger grid
 * @height: Dimension
 *
 * Return: 0 (Successful)
 */

void free_grid(int **grid, int height)
{
	int hex;

	for (hex = 0; hex < height; hex++)
	{
		free(grid[hex]);
	}
	free(grid);
}
