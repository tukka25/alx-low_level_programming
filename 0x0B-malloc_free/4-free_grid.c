#include "main.h"

/**
 *	free_grid - deallocate 2d array filled with 0
 *	@grid: a 2d array of int
 *	@height: a int length of the height
 *	Return: void
 */

void free_grid(int **grid, int height)
{
	int	i = 0;

	if (!grid)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
