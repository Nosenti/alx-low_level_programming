#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen_recursion(char *s)
{
	int len;

	lent = 0;
	if (*s == '\0')
	{
		return;
	}
	len++;
	_strlen_recursion(s + 1);
	return (len);
}