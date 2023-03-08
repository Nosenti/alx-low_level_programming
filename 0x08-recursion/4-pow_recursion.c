#include "main.h"

/**
 * _pow_recursion - returns the power of a number
 * @x: int x
 * @y: power of x
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	int pow;
	
	pow = 1;
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	pow = x * pow(y - 1);
	return (pow);
}
