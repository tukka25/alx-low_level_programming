#include "main.h"

/**
 *  _puts - print the string in stdout
 *
 * @str: a string
 *
 * Return: void
 */

void _puts(char *str)
{
	int	i = 0;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
