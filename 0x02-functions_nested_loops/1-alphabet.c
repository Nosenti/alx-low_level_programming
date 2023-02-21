#include "main.h"
/**
 * print_alphabet - print lowercase alphabets
 * Return: 0
 */

int print_alphabet(void)
{
	char ch;

	for (char = 'a'; char <= 'z'; char++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
