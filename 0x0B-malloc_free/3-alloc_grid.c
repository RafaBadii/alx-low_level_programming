#include "main.h"

/**
 * **alloc_grid - Function return a pointer to a 2 dimensional array of int
 * @width: int width.
 * @height: int height.
 * Return: Null if width or height is 0 or negative.
*/

int **alloc_grid(int width, int height)
{
	int **grid; /* point to height and width */
	int x, y;

	if (width < 1 || height < 1)
/* height: raw, width: column */
		return (NULL);

	grid = malloc(height * sizeof(*grid)); /* *grid: int */
	if (grid == NULL)
		return (NULL);

	for (x = 0; x < height; x++) /* Rows */
	{
		grid[x] = malloc(width * sizeof(**grid));
		if (grid[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(grid[x]);
			free(grid);
			return (NULL);
		}
		for (y = 0; y < width; y++) /* Columns */
			grid[x][y] = 0;
	}
	return (grid);
}
