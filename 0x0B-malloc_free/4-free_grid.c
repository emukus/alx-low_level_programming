#include "main.h"

/**
 * free_grid - function that frees a 2d grid previous crated by alloc_grid function
 * @grid: the 2d array to be freed
 * @height: height of the grid
 *
 * Return: free grid
 */

void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}

