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

	while (j < 10)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
			else
				_putchar(i + 48);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
