#include "main.h"

/**
 *  print_alphabet - prints lower alphabet
 *
 */

void print_alphabet(void)
{
	int		j = 97;

	while (j < 123)
	{
		_putchar(j);
		j++;
	}
	_putchar('\n');
}

/**
 *  main -Entry point
 *
 *  Return: Always 0 (Success)
 */

// int main(void)
// {
// 	print_alphabet();
// 	return (0);
// }
