#include "main.h"

/**
 *  print_sign - check if its sign
 *	@n: int
 *	Return: retuen 1 if n is '+' or 0 if its '0' or -1 if its -
 */

int		print_sign(int n)
{
	if (n > 0)
		return (1);
	if (n < 0)
		return (-1);
	return (0);
}
