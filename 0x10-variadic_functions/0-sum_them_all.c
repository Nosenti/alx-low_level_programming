#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its params
 * @n: number of parameters
 * @...: parameters passed
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	if (args == 0)
	{
		return (0);
	}
	unsigned int i, sum;

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
