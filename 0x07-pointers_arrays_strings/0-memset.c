#include "main.h"

/**
 * _memset - fills memory are with constant byte
 * @s: pointer to the area filled
 * @b: constant byte
 * @n: first n memory spaces
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char value = (unsigned char)b;

	for (i = 0; i < n; i++)
	{
		*(s + i) = value;
	}
	return (s);
}
