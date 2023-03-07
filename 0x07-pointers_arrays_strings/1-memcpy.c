#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: destination area
 * @src: src area
 * @n: bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *src;
	}
	return (dest);
}
