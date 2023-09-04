#include "main.h"

/**
 *	argstostr - args to str
 *	@ac: a array vector len
 *	@av: an array vector
 *	Return: char *
 */

char *argstostr(int ac, char **av)
{
	int	length = 0;
	int	i = 0;
	int	j = 0;
	char	*str = NULL;

	if (!ac || !av)
		return (NULL);
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			length++;
			j++;
		}
		i++;
	}
	str = malloc(length + ac + 1);
	i = 0;
	j = 0;
	length = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			str[length] = av[i][j];
			j++;
			length++;
		}
		str[length] = '\n';
		length++;
		i++;
	}
	str[length] = '\0';
	return (str);

}
