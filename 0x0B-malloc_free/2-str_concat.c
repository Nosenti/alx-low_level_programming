#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "00-strlen.c"

/**
 * str_concat - concatinating strings
 * @s1: first string
 * @s2: second string
 * Return: pointer or NULL
 */

char *str_concat(char *s1, char *s2)
{
	int s1len, s2len, len, i;
	char *cstr;

	s1len = _strlen(s1);
	s2len = _strlen(s2);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len = s1len + s2len;
	cstr = malloc(sizeof(char) * len + 1);
	for (i = 0; i < s1len; i++)
	{
		cstr[i] = s1[i];
	}
	for (i = s1len; i < len; i++)
	{
		cstr[i] = s2[i - s1len];
	}
	cstr[len] = '\0';
	return (cstr);
}
