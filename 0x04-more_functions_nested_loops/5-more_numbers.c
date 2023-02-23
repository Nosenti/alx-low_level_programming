#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 to 1d4
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		int j = 0;

		for (j = 0; j <= 14; j++)
		{
			_putchar('0' + j);
		}
		_putchar('\n');
	}
}
