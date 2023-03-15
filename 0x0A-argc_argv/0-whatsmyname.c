#include <stdio.h>

/**
 * whatsmyname: print the name of the program
 * @argc: size of parameters
 * @argv: arrays of string parameters
 * Return: void
 */

int main(int arc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);
	return (0);
}
