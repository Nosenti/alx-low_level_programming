#include "main.h"

/**
 * print_binary - prints the binary of a number
 * @n: number
 * Return: number
 */

void print_binary(unsigned long int n)
{
	int bit_count, i;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar("0");
		return;
	}
	bit_count = 0;
	mask = 1;

	while (mask <= n && mask != 0)
	{
		mask <<= 1;
		bit_count++;
	}

	for (i = bit_count - 1; i >= 0; i--)
	{
		unsigned long int bit = (n >> i) & 1;
		_putchar("%lu", bit);
	}
}
