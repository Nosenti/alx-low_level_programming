#include "function_pointers.h"

/**
 * array_iterator - execute a function on each element of the array
 * @array: array given
 * @size: size of the array
 * @action: action to be carried out
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
