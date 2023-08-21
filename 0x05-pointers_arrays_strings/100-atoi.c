#include "main.h"
# include <stdlib.h>

/**
 * _atoi - convert ascii to int
 *
 * @s: a char * to convert
 *
 * Return: int
 */

int _atoi(char *s)
{
	int i = 0;
	int	sign = 1;
	int result = 0;

	while ((s[i] < '0' || s[i] > '9') && s[i])
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] == '0' && s[i])
		i++;
	while (s[i] >= '0' && s[i] <= '9' && s[i])
	{
		result = result * 10 + s[i] - '0';
		if (result == 214748364 && s[i + 1] && sign == 1)
			return ((214748364 * 10 + (s[i + 1] - 48)));
		if (result == 214748364 && s[i + 1] == '8' && sign == -1)
			return (((-214748364 * 10) - (s[i + 1] - 48)));
		i++;
	}
	return (result * sign);
}
