#include "main.h"
#include <stdlib.h>

/**
 * main - fizzbuzz
 *
 * Return: 0
 */

int main(void)
{
	int i = 1;

	while (i <= 100)
	{

		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		if (i % 5 == 0)
		{
			printf("Buzz");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
		if (i != 100)
			printf(" ");
		i++;
	}
}
