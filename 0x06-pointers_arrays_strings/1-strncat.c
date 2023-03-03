#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: number of chars
 * Return: string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlen, slen, i;

	dlen = 0;
	slen = 0;
	for (i = 0; dest[i] != '\0'; i++)
	{
		dlen++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		slen++;
	}
	for (i = 0; i < n; i++)
	{
		dest[dlen + i] = src[i];
	}
	return (dest);
}
