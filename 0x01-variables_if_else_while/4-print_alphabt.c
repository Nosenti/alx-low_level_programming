#include <stdio.h>
/**
 * main - prints lowercase alphas except q and e
 * Return: 0
 */

int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i != 113 && i != 117)
		{
			putchar("%c", i);
		}
		i++;
	}
	putchar("\n");
	return (0);
}
