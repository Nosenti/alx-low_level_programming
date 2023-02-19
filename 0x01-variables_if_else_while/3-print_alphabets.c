#include <stdio.h>
/**
 * main: Print alphabet in lowercase, and then in uppercase
 * purpose: "Print alphas in lowecase and uppercase"
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
