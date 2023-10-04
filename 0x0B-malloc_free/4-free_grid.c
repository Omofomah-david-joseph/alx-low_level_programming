#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - frees 2-dimensional grids / or arrays
 * @grid: address of the two dimensional grid
 * @height: grid height
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
