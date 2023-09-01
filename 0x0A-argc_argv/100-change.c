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
	int	i = 0;
	int	j = 0;

	if (ac != 2)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	j = atoi(av[1]);
	while (j > 0)
	{
		if (j >= 25)
			j -= 25;
		else if (j >= 10)
			j -= 10;
		else if (j >= 5)
			j -= 5;
		else if (j >= 2)
			j -= 2;
		else if (j >= 1)
			j -= 1;
		i++;
	}
	printf("%d\n", i);
	return (0);
}
