#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a two-dimensional array of integers
 * @grid: the grid to be freed
 * @height: the height of the grid
 * Return: If successful, a pointer to the newly allocated grid
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
