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
	int r, i;

	r = 0;
	i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
