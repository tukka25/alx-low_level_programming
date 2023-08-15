#include "main.h"

/**
 *  print_last_digit - print the last digit
 *	@n: int
 *	Return: return the last digit
 */

int		print_last_digit(int n)
{
	return (_putchar(n + 48), n % 10);
}
