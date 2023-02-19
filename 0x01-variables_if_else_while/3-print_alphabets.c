#include <stdio.h>
/**
 * main: Print alphabet in lowercase, and then in uppercase
 * purpose: "Print alphas in lowecase and uppercase"
 * Return: 0
 */

int main(void)
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (char i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar("\n");
	return (0);
}
