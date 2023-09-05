#include "main.h"

/**
 * free_grid - Function free the 2 dimensional array of int using alloc_grid
 * @height: int height.
 * @grid: int char
 * Return: void.
*/

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
