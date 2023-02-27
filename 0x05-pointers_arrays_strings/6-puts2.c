#include "main.h"
#include "2-strlen.c"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int length, i;

	length = _strlen(str);
	i = 0;

	while (i < length)
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}
