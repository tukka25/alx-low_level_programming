#include "main.h"

/**
 *  string_toupper - convert toupper case
 *
 * @s: a int array
 *
 * Return: char *
 */

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
