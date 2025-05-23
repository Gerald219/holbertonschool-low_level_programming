#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - Prints a grid of numbers.
 * @grid: The grid to print.
 * @width: Number of columns.
 * @height: number of rows.
 *
 * Return: nothing.
 */

void print_grid(int **grid, int width, int height)
{
	int w, h;

	h = 0;
	while (h < height)
	{
		w = 0;
		while (w < width)
		{
			printf("%d ", grid[h][w]);
			w++;
		}
		printf("\n");
		h++;
	}
}

/**
 * main - Runs the test.
 *
 * Return: Always.
 */
int main(void)
{
	int **grid;

	grid = alloc_grid(6, 4);
	if (grid == NULL)
	{
		return (1);
	}
	print_grid(grid, 6, 4);
	printf("\n");

	grid[0][3] = 98;
	grid[3][4] = 402;

	print_grid(grid, 6, 4);

	free_grid(grid, 4);
	return (0);
}
