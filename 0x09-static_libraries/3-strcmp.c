#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string one
 * @s2: string two
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}

	return (s1[i] - s2[i]);
}
