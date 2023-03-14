#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - freeing a 2D array
 * @grid: 2D array
 * @height: height of the array
 * Return: void
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
