#include "main.h"

/**
 *  print_last_digit - print the last digit
 *	@n: int
 *	Return: return the last digit
 */

int		print_last_digit(int n)
{
	return (_putchar((_abs(n) % 10) + 48), _abs(n) % 10);
}
