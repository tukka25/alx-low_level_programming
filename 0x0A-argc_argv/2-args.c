#include "main.h"
/**
 *	main -Entry point
 *	@ac:number of args
 *	@av:args vector
 *	Return: Always 0 (Success)
 */

int main(int ac, char *av[])
{
	int i = 0;

	if (ac >= 1)
	{
		while (av[i])
		{
			printf("%s\n", av[i]);
			i++;
		}
	}
}
