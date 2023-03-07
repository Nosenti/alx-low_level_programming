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
	int i;

	i = 0;
	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
