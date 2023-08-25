#include "main.h"
#include <string.h>

/**
 *  _strncpy - copy n bytes from src to dest
 *
 * @src: a src string
 * @dest: a dest string
 * @n: a int number of char
 *
 * Return: copy of a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int	j = 0;

	while (src[j] && j < n)
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
		dest[j++] = '\0';
	return (dest);
}
