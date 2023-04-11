#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0
 * @n: value
 * @index: index to be set to 0
 * Return: 1(success) or -1(failure)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1UL << index;

	*n &= ~mask;
	return (1);
}
