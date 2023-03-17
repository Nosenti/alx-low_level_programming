#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"
#include "2-strlen.c"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2
 * Return: pointer or NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *newstr;
	unsigned int s2len, s1len;
	
	s1len = UINT_MAX + 1 + _strlen(s1);
	s2len = UINT_MAX + 1 + _strlen(s2);
	if (s1 == NULL)
	{
		s1len = 0;
	}
	if (s2 == NULL)
	{
		s2len = 0;
	}
	if (n >= s2len)
	{
		n = s2len;
	}
	newstr = malloc(sizeof(char) * s1len + n + 1);
	if (!newstr)
	{
		return (NULL);
	}
	for (i = 0; i < s1len; i++)
	{
		newstr[i] = s1[i];
	}
	for (i = s1len - 1; i < s1len + n; i++)
	{
		newstr[i] = s2[i - s1len];
	}
	newstr[s1len + n] = '\0';
	return (newstr);
}
