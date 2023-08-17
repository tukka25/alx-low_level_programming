#include "main.h"

/**
 * print_diagonal - display '\' n times
 *
 * @n: number of '\'
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
