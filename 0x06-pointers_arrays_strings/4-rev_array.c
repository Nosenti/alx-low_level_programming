#include "main.h"

/**
 * reverse_array - reverse an array of integers
 * @n: number of elements in an array
 * @a: array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		a[i] = a[n - 1- i];
		a[n - 1 -i] = a[i];
	}
}
