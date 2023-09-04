#include "main.h"

/**
 *	_strdup - creates an array
 *	@str: a string
 *	Return: char *
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *s = NULL;

	if (!str)
		return (NULL);
	while (str[i])
		i++;
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	while (str[j])
	{
		s[j] = str[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
