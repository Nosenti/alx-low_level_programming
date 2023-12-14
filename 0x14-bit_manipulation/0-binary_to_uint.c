#include "main.h"

/**
 * binary_to_uint - conversts a binary to an int
 * @b: pointer to string of 0 and 1 chars
 * Return: number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	size_t len;
	unsigned int result;
	size_t i;

	if (b == NULL)
	{
		return (0);
	}
	len = strlen(b);
	result = 0;

	for (i = 0; i < len; i++)
	{
		char c = b[i];

		if (c != '0' && c != '1')
		{
			return (0);
		}
		result <<= 1;

		if (c == '1')
		{
			result |= 1;
		}
	}
	return (result);
}

