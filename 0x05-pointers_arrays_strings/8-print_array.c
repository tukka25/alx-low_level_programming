#include "main.h"

/**
 *  print_array - print  n elements od array a
 *
 * @a: a int array
 * @n: a int number of elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int	i = 0;

	while (a[i] != 0 && i < n)
	{
		if (i == n - 1 && a[i])
			printf("%d", (a[i]));
		else
			printf("%d, ", (a[i]));
		i++;
	}
	printf("\n");
}
