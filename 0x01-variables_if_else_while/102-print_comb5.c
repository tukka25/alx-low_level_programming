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
	int	i = 0;
	int	j = 1;
	char *str = "0123456789";

	while (i < 99)
	{
		j = i + 1;
		while (j < 99)
		{
			putchar(str[i]);
			putchar(str[i]);
			putchar(str[j - 1]);
			putchar(str[j]);
			j++;
			// if (str[i + 1] != '9')
			// {
				putchar(',');
				putchar(' ');
			// }
		}
		i++;
	}
	putchar('\n');
	return (0);
}
