#include "main.h"

/**
 * flip_bits - returns the nubmer of bits to flip
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	unsigned int count;

	xor = n ^ m;
	count = 0;

	while(xor)
	{
		count += xor & 1;
		xor >>= 1;
	}
	return (count);
}
