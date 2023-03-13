#include <stdio.h>
#include "main.h"

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: character initialized at the start
 * Return: pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *chars;
	int i;

	if (size == 0)
	{
		return (NULL);
	}

	chars = malloc(sizeof(c) * size);

	for (i = 0; i < size; i++)
	{
		chars[i] = c;
	}

	return (chars);
}
