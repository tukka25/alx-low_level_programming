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
	if (!arr)
		return (NULL);
	while (i < height)
	{
		arr[i] = malloc((width + 1) * sizeof(int));
		if (!arr[i])
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}
		j = 0;
		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		arr[i][j] = 0;
		i++;
	}
	arr[i] = NULL;
	return (arr);
}
