#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int len, start;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len / 2) + 1;
	}
	while (start < len )
	{
		_putchar(str[start]);
		start++;
	}
	_putchar('\n');
}
