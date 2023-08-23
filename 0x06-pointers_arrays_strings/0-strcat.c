#include "main.h"
#include <string.h>

/**
 *  _strcat - concatenate two strings
 *
 * @src: a src string
 * @dest: a dest string
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int	i = 0;
	int	j = 0;

	while (dest[i])
		i++;
	while (src[j] && dest[i])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
