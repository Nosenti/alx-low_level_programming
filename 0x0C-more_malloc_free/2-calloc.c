#include "stdio.h"
#include "stdlib.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number in the array
 * @size: size of elements
 * Return: pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;
	int i;

	if (nmeb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmeb * size);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < nmeb * size; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
