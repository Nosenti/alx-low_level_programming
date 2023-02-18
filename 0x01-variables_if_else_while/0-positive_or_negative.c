#include <stdio.h>
#include <stdlib.h>
/**
 * main -Print the number and find whether it is negative or positive
 * Return: 0
 *
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX/2;

	if (n == 0)
	{
		printf("%d is zero", n);
	}
	else if (n > 0)
	{
		printf("%d is positive", n);
	}
	else
	{
		printf("%d is negative", n);
	}
	return (0);
}
