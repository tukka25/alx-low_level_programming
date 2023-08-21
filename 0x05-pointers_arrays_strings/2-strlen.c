#include "main.h"

/**
 *  _strlen - count the length
 *
 * @s: a string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
