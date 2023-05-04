#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int test;
	char *test_as_bytes;

	test = 1;
	test_as_bytes = (char *)&test;

	return (test_as_bytes[0] == 1 ? 1 : 0);
}

