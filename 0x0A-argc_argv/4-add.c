#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
/**
 *	main - prints all arguments it receives.
 *	@ac:number of args
 *	@av:args vector
 *	Return: Always 0 (Success)
 */

int main(int ac, char **av)
{
	int	i = 1;
	int	j = 0;

	if (ac < 2)
	{
		printf("0\n");
		return (1);
	}
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] && !isdigit(av[i][j]))
			{
				write(1, "Error\n", 6);
				return (1);
			}
			j++;
		}
		i++;
	}
	i = 1;
	j = 0;
	while (av[i])
	{
		j += atoi(av[i]);
		i++;
	}
	printf("%d\n", j);
	return (0);
}
