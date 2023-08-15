#include "main.h"

/**
 *  print_last_digit - print the last digit
 *	@n: int
 *	Return: return the last digit
 */

int		print_last_digit(int n)
{
	long	tmp = 0;

	if (n > 0)
	{
		_putchar((n % 10) + 48);
	}
	else
	{
		tmp = n * -1;
		_putchar((tmp % 10) + 48);
		return (tmp % 10);
	}
	return (n % 10);
}
