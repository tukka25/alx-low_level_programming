#include "main.h"

/**
 *  times_table - print the  time table
 *	Return: void
 */


void times_table(void)
{
	int	a = 0;
	int	b = 0;
	int	c = 0;
	int	d = 0;
	int	e = 0;
	int	f = 0;
	int	g = 0;
	int	h = 0;
	int	i = 0;
	int	k = 0;
	int	arr[10];
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;
	arr[4] = e;
	arr[5] = f;
	arr[6] = g;
	arr[7] = h;
	arr[8] = i;
	arr[9] = k;
	int	j = 0;
	int	x = 0;
	int	y = 0;

	while (j <= 9)
	{
		x = 0;
		while (x <= 9)
		{
			if (arr[x] < 10)
			{
				_putchar(arr[x] + 48);
			}
			else
			{
				_putchar((arr[x] / 10) + 48);
				_putchar((arr[x] % 10) + 48);
			}
			
			if (x != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (arr[x] < 10)
					_putchar(' ');
			}
			x++;
		}
		_putchar('\n');
		j++;
		arr[1]++;
		arr[2] += 2;
		arr[3] += 3;
		arr[4] += 4;
		arr[5] += 5;
		arr[6] += 6;
		arr[7] += 7;
		arr[8] += 8;
		arr[9] += 9;
		// y = 0;
		// while (y < 9)
		// {
		// 	printf("{%d} ", arr[y]);
		// 	y++;
		// }
		// _putchar('\n');
	}
}

int main(void)
{
	times_table();
	return(0);
}
