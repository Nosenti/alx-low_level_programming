#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 1d4
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar('%d' + j);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
