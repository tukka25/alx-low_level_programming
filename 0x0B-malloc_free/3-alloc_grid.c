#include "main.h"

/**
 *	alloc_grid - creates 2d array filled with 0
 *	@width: a int length of the width
 *	@height: a int length of the height
 *	Return: int **
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int	**arr;

	if (width <= 0 && height <= 0)
		return (NULL);
	arr = malloc((height + 1) * sizeof(int *));
	while (i < height)
	{
		arr[i] = malloc((width + 1) * sizeof(int));
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		arr[i][j] = 0;
		i++;
	}
	return (arr);
}
