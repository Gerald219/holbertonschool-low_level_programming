#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2d array (grid) previously allocated by alloc_grid.
 * @grid: The 2D array to be freed.
 * @height: The number of rows in the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
