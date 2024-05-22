#include "search_algos.h"

/**
 * print_array - Helper function to print array between two indices
 * @array: Array to be printed
 * @start: Start index
 * @end: end index
 *
 * Return: void
*/
void print_array(int *array, size_t start, size_t end)
{
	size_t i;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		printf("%d", array[i]);
		if (i < end)
		{
			printf(", ");
		}
	}
	printf("\n");
}
/**
 * binary_search - Searches for value in array in linear time
 * @array: Pointer to the first el of the array
 * @size: size of the array
 * @value: value to search for
 *
 * Return: The first idx where the value is located or -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			low = mid + 1;
		} else
		{
			high = mid - 1;
		}
	}
	return (-1);
}
