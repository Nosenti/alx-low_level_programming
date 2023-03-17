#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: parameter
 * Return: pointer or 98
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *mem;

	mem = malloc(b);
	if (!mem)
	{
		exit(98);
	}
	return (mem);
}
