#include "main.h"

/**
 *  _isdigit - check if its digit
 *
 * @c: int
 *
 * Return: 1 if its digit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
