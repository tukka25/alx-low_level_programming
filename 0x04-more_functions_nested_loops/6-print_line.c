#include "main.h"

/**
 * print_line - display n '_'
 *
 * @n: number of '_'
 * Return: void
 */

void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
