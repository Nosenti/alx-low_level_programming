#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 * Return: void
 */

void puts_half(char *str)
{
	int len, half;

	len = _strlen(str);
	half = len / 2;
	while (half < len )
	{
		_putchar(*str[half]);
		str++;
	}
}
