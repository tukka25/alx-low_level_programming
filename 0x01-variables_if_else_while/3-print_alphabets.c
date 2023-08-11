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
	int	i;
	char *str;

	i = 0;
	str = "abcdefghijklmnopqrstuvwxyz";
	while (str[i])
	{
		putchar(str[i]);
		i++;
	}
	i = 0;
	while (str[i])
	{
		putchar(str[i] - 32);
		i++;
	}
	putchar('\n');
	return (0);
}
