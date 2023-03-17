#include <stdio.h>
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
	int i;
	char *newstr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= _strlen(s2))
	{
		n = _strlen(s2);
	}
	newstr = malloc(sizeof(char) * _strlen(s1) + n + 1);
	if (!newstr)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != "\0"; i++)
	{
		newstr[i] = s1[i];
	}
	for (i = _strlen(s1) - 1; i < _strlen(s1) + n; i++)
	{
		newstr[i] = s2[i -_ strlen(s1)];
	}
	newstr[_strlen(s1) + n] = '\0';
	return (newstr);
}
