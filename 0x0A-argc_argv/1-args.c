#include <stdio.h>

/**
 * main - print args count
 * @argc: args count
 * @argv: args
 * Return: int
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
