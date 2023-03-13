#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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

	s1len = 0;
	s2len = 0;
	if (s1 == NULL)
	{
		s1len = s1len + 0;
	}
	if (s2 == NULL)
	{
		s2len = s2len + 0;
	}
	for (i = 0; *s1 != '\0'; i++)
	{
		s1len++;
	}
	for (i = 0; *s2 != '\0'; i++)
	{
		s2len++;
	}
	len = s1len + s2len + 1;
	cstr = malloc(sizeof(char) * len);
	for (i = 0; i < s1len; i++)
	{
		cstr[i] = s1[i];
	}
	for (i = s1len; i < len; i++)
	{
		cstr[i] = s2[i];
	}
	cstr[len] = '\0';
	return (cstr);
}
