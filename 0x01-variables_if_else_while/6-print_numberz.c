#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
/**
 *  main -Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int	i = '0';

	while (i != ':')
		putchar(i++);
	putchar('\n');
	return (0);
}
