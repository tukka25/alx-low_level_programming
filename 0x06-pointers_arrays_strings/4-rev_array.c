#include "main.h"

/**
 *  reverse_array - reverse an array
 *
 * @a: a int array
 * @n: a number of elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int	flag = 0;
	int tmp;

	while (i < n)
		i++;
	if (i % 2 == 0)
		flag = 1;
	i -= 1;
	while (i > 0)
	{
		if (flag == 0)
			if (j == i)
				break;
		if (flag == 1)
			if (j == i + 1)
				break;
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		j++;
		i--;
	}
}
