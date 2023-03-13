#include "main.h"
#include <stdlib.h>

/**
 * free_grid - creates a two-dimensional array of integers
 * @grid: the grid of the grid
 * @height: the height of the grid
 * Return: If successful, a pointer to the newly allocated grid.
 */

void free_grid(int **grid, int height);

{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
