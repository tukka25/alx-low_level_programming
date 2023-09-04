#include "main.h"

/**
 *	str_concat - creates an s1 + s2
 *	@s1: a string s1
 *	@s2: a string s2
 *	Return: char *
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	char *s = NULL;

	if (!s1 && !s2)
		return ("");
	if (s1)
		while (s1[i])
			i++;
	if (s2)
		while (s2[j])
			j++;
	s = malloc(i + j + 1);
	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
	{
		while (s1[i])
		{
			s[i] = s1[i];
			i++;
		}
	}
	if (s2)
	{
		while (s2[j])
		{
			s[i] = s2[j];
			i++;
			j++;
		}
	}
	s[i] = '\0';
	return (s);
}
