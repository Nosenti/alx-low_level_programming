#include "search_algos.h"

/**
 * linear_search - Searches for value in array in linear time
 * @array: Pointer to the first el of the array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: The first idx where the value is located or -1 if not found
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
