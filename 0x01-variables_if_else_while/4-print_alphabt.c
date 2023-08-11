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
		if (str[i] != 'q' && str[i] != 'e')
			putchar(str[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
