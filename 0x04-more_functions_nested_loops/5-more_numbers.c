#include "main.h"

/**
 * more_numbers - display the digits from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int j = 0;
	int	i = 0;
	int	k = 0;

	while (j < 10)
	{
		i = 0;
		while (i <= 14)
		{
			k = i;
			if (i <= 9)
				k = i * 10;
			_putchar((k / 10) + 48);
			if (i >= 10)
				_putchar((i % 10) + 48);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
