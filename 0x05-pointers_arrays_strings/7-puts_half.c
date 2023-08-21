#include "main.h"

/**
 *  puts_half - print half of the string
 *
 * @str: a string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int	j = 0;

	if (!str)
		return;
	j = _strlen(str) / 2;
	if (_strlen(str) % 2 == 0)
		j = _strlen(str) / 2;
	else
		j = (_strlen(str) / 2) + 1;
	while (str[j])
		_putchar(str[j++]);
	_putchar('\n');

}
