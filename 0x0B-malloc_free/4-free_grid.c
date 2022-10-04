#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - entry point
 * @grid: an int
 * @height: an int
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
		free(grid[h]);
	free(grid);
}
