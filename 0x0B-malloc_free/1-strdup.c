#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "00-strlen.c"

/**
 * _strdup - copy of the string
 * @str: string paramter
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *cpy;
	int len;

	len = _strlen(str);
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
