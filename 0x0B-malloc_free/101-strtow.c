#include "main.h"

/**
 *	len - return len of 2d array
 *	@str: an array
 *	Return: int
 */

static int	len(char *str)
{
	int i = 0;
	int length = 0;

	if (!str)
		return (0);
	while (str[i])
	{
		if (i == 0 && str[i] != ' ')
			length++;
		else if (str[i] != ' ' && str[i - 1] == ' ')
			length++;
		i++;
	}
	return (length);
}

/**
 *	strtow - split
 *	@str: an array
 *	Return: char **
 */
char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	int	len1 = 0;
	char	**s = NULL;

	if (!str || !*str || (*str == ' ' && !str[1]))
		return (NULL);
	len1 = len(str);
	s = malloc((len1 + 1) * sizeof(char *));
	if (!s)
		return (NULL);
	while (*str)
	{
		j = 0;
		while (str && *str == ' ')
			str++;
		if (!*str)
			break;
		if (*str == ' ')
			str++;
		while (str[j] && str[j] != ' ')
			j++;
		s[i] = malloc(j + 1);
		if (!s[i])
			return (free(s[i]), free(s), NULL);
		j = 0;
		while (*str && *str != ' ')
		{
			s[i][j] = *str;
			j++;
			str++;
		}
		s[i][j] = '\0';
		i++;
	}
	s[i] = NULL;
	return (s);
}
