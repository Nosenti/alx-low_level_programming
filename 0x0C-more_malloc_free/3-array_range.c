#include <stdio.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min parameter
 * @max: max parameter
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		arr[i - min] = i;
	}
	return (arr);
}
