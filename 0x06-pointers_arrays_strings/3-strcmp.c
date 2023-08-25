
#include "main.h"
#include <string.h>

/**
 *  _strcmp - coompare between s1 and s2
 *
 * @s1: a src string
 * @s2: a dest string
 *
 * Return: diffrence between them
 */

int _strcmp(char *s1, char *s2)
{
	int	i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
