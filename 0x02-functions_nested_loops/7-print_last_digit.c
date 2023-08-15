#include "main.h"

/**
 *  print_last_digit - print the last digit
 *	@n: int
 *	Return: return the last digit
 */

int		print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar((n % 10) + 48);
	}
	else
	{
		n *= -1;
		_putchar((n % 10) + 48);
	}
	return (n % 10);
}
