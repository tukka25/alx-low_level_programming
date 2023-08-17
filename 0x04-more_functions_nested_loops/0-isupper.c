#include "main.h"

/**
 *  _isupper - check if its uppercase
 *
 * @c: int
 *
 * Return: 1 if its upeercase else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
