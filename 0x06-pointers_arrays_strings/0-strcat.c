#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: character
 */

char *_strcat(char *dest, char *src)
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
	for (i = 0; i <= slen; i++)
	{
		dest[dlen + 1] = src[i];
	}
	return (dest);
}
