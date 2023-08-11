#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main -Entry point
 *
 *  Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int	tmp;
	int	flag;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	flag = 1;
	if (n < 0)
	{
		n *= -1;
		flag = -1;
	}
	tmp = n % 10;
	printf("Last digit of %d is %d ", n * flag, tmp * flag);
	if (tmp * flag < 6 && tmp != 0)
		printf("and is less than 6 and not 0\n");
	else if (tmp * flag > 5)
		printf("and is greater than 5\n");
	else if (tmp == 0)
		printf("and is 0\n");
	return (0);
}
