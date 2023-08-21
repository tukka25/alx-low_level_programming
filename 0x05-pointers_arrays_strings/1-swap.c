#include "main.h"

/**
 *  swap_int - swap the values of a and b
 *
 * @a: a pointer to int a
 * @b: a pointer to int b
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c = 0;

	c = *a;
	*a = *b;
	*b = c;
}
