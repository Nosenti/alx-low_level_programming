#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: integer
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
