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
	int len, i;
	char *cpy;

	len = 1;
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; *str != '\0'; i++)
	{
		len++;
	}
	cpy = (char *) malloc(sizeof(char) * len);
	if (cpy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		cpy[i] = str[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);

}
