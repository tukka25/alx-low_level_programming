#include "main.h"

/**
 * print_triangle - display triangle wuth numbers of #
 *
 * @size: number of '#'
 * Return: void
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (i < size)
	{
		j = i;
		while (j < size - 1 && i != size - 1)
		{
			_putchar(' ');
			j++;
		}
		k = 0;
		while (k <= i)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
}
