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
	int slen, i;

	for (i = 0; i < n && s[i] != '\0'; i++)
	{
		s[i] = b;
	}
	return (s);
}
