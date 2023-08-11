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
	int	k = 2;
	char *str = "0123456789";

	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			k = j + 1;
			while (str[k])
			{
				putchar(str[i]);
				putchar(str[j]);
				putchar(str[k]);
				k++;
				if (str[i + 2] != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
