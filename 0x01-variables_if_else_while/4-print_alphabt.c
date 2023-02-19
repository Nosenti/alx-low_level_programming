#include <stdio.h>
/**
 * main - prints lowercase alphas except q and e
 * Return: 0
 */

int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'q' && i != 'u')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
	return (0);
}
