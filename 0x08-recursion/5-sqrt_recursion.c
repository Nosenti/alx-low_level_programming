#include "main.h"

/**
 * _sqrt_recursion - finidng square root
 * @n: integer
 * Return: integer
 */

int _sqrt_recursion(int n)
{
	int root;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	root = 2 * _sqrt_recursion(n / 2);
	if (root * root > n)
	{
		return (root / 2);
	}
	else if ((root + 1) * (root + 1) <= n)
	{
		return (root + 1);
	}
	else
	{
		return (root);
	}
}
