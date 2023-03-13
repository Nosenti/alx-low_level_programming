#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - copy of the string
 * @str: string paramter
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *cpy;
	int len, i;

	len = 0;

	for (i = 0; *str != '\0'; i++)
	{
		len++;
	}

	if (str == NULL)
	{
		return (NULL);
	}

	if (str)
	{
		cpy = malloc(sizeof(char) * len + 1);
		
		for (i = 0; i < len; i++)
		{
			cpy[i] = str[i];
		}
		cpy[len] = '\0';
		return (cpy);
	}
	return (NULL)
}
