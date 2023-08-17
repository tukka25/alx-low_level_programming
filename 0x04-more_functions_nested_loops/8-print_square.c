#include "main.h"
#include <stdlib.h>

/**
 * print_square - display sqaure of '#'
 *
 * @size: number of '#'
 * Return: void
 */
void print_square(int size)
{
	int	i = 0;
	int	j = 0;

	if (size <= 0)
		_putchar('\n');
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
