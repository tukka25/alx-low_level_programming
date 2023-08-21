#include "main.h"

/**
 *  print_rev - print the string in stdout in reverse way
 *
 * @s: a string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	if (!s)
		return;
	while (s[i])
		i++;
	i -= 1;
	while (i >= 0)
		_putchar(s[i--]);
	_putchar('\n');
}
