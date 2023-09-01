#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *	main - prints all arguments it receives.
 *	@ac:number of args
 *	@av:args vector
 *	Return: Always 0 (Success)
 */

int main(int ac, char **av)
{
	if (ac != 3)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	printf("%d\n", atoi(av[1]) * atoi(av[2]));
	return (0);
}
