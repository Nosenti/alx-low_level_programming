#include <stdio.h>
/**
 * main: Print alphabet in lowercase, and then in uppercase
 * purpose: "Print alphas in lowecase and uppercase"
 * Return: 0
 */

int main(void)
{
	for (int i = 97; i < 122; i++)
	{
		putchar("%c", i);
	}
	for (int i = 65; i < 90; i++)
	{
		putchar("%c", i);
	}
	putchar("\n");
	return (0);
}
