#include "main.h"

/**
 *  rev_string - put the string in reverse way in place
 *
 * @s: a string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	int	flag = 0;
	char tmp;

	while (s[i])
		i++;
	if (i % 2 == 0)
		flag = 1;
	i -= 1;
	while (s[j] && i > 0)
	{
		if (flag == 0)
			if (j == i)
				break;
		if (flag == 1)
			if (j == i + 1)
				break;
		tmp = s[j];
		s[j] = (char)s[i];
		s[i] = tmp;
		j++;
		i--;
	}
}
