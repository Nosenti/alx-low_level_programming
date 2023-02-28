#include <stdio.h>
#include "main.h"


/**
 * print_array - print n elements of an array of int
 * @a: pointer to an array
 * @n: length of an array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", %d", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
