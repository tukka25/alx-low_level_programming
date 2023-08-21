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
	int	i = 0;

	if (!str)
		return;
	while (str[i])
		i++;
	j = i / 2;
	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i / 2) + 1;
	while (str[j])
		_putchar(str[j++]);
	_putchar('\n');

}
