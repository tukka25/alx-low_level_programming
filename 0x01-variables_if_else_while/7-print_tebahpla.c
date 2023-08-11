#include <stdlib.h>
#include <string.h>
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

	str = "abcdefghijklmnopqrstuvwxyz";
	i = strlen(str) - 1;
	while (i >= 0)
	{
		putchar(str[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
