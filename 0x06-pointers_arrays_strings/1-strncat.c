#include "main.h"
#include <string.h>

/**
 *  _strncat - concatenate two strings to number of n
 *
 * @src: a src string
 * @dest: a dest string
 * @n: a int number of char
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int	i = 0;
	int	j = 0;

	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
