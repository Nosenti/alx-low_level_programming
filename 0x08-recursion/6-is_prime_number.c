#include "main.h"

/**
 * is_prime_number - checks if an int is prime number
 * @n: integer
 * Return: integer
 */

int is_prime_number(int n)
{
	return (is_prime_number(n, n - 1));
}

int is_prime_number(int n, int divisor)
{
	if (n < 2)
	{
		return (0);
	}
	else if (divisor == 0)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number(n, n - 1));
	}
}
