#include "main.h"

/**
 *  print_array - copies from src to dst
 *
 * @dest: a char * to copy to
 * @src: a char * to copy from
 *
 * Return: char * dest
 */

char *_strcpy(char *dest, char *src)
{
	int	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
