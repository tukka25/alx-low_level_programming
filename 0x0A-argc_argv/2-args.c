#include <stdio.h>
/**
 *	main - prints all arguments it receives.
 *	@ac:number of args
 *	@av:args vector
 *	Return: Always 0 (Success)
 */

int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
}
