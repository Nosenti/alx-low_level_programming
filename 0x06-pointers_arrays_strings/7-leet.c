#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @str: string
 * Return: string
 */

char *leet(char *str)
{
	int i, j;
	char ltable[] = "aAeEoOtTlL44377011";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == ltable[j])
			{
				str[i] = ltable[j + 10];
				break;
			}
		}
	}
	return (str);
}
