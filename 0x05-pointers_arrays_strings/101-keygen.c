#include "main.h"
# include <stdio.h>

/**
 * _atoi - convert ascii to int
 *
 * @s: a char * to convert
 *
 * Return: int
 */

int main(void)
{
	// int i = 0;
	FILE *f = fopen("101-crackme", "r");

	char buffer[1024];

    while (fgets(buffer, sizeof(buffer), f) != NULL)
	{
    	printf("%s", buffer);
	}
	fclose(f);
}
