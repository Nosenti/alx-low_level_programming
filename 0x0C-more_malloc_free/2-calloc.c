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
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		((char *)ptr)[i] = 0;
	}
	return (ptr);
}
