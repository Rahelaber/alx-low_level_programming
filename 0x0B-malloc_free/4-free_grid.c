#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - freesthe memory allocate for the grid
 * created by alloc-grid()
 * @grid: grid to free
 * @height: height of grid
 * Return: nothing
 *
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
