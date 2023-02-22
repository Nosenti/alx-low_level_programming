#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: int parameter.
 * Return: 1 or -1 or 0
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('1');
		return (1);
	}
	else
	{
		_putchar('-1');
		return (-1);
	}
}
