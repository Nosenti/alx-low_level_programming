#include "main.h"
#include "2-strlen.c"

/**
 * rev_string - reverse a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int length, i;
	char temp;

	length = _strlen(s);

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
