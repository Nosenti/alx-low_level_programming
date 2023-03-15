#include <main.h>

/**
 * main - prints all arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for(i = 0; i < argc; i++)
	{
		printf(argv[i]);
		printf("\n");
	}
	return (0);
}
