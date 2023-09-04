#include "main.h"

/**
 *	create_array- creates an array
 *	@size: a unsignedcint
 *	@c: a char
 *	Return: char *
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str = NULL;

	if (size <= 0)
		return (NULL);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	str[i] = 0;
	return (str);
}
