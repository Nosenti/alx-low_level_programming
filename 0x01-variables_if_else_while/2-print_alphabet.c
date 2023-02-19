#include <stdio.h>
/**
 * main: prints the alphabets in one line
 * Return: 0
 */

int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		putchar("%c", i);
	}
	putchar("\n");
	return (0);
}
