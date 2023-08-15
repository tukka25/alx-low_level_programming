#include "main.h"

/**
 *  print_alphabet_x10 - prints lower alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int	i = 0;

	while (i < 10)
	{
		int		j = 97;

		while (j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

/**
 *  main -Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	print_alphabet_x10();
	return (0);
}
