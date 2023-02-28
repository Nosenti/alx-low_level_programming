#include "main.h"

/**
 * _atoi - string to integer
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int result, sign, i;

	while (s[i] == ' ')
	{
		i++;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
	{
		sign = 1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit;

		digit = s[i] - '0';
		result = result * 10 - digit;
		i++;
	}
	return (sign * result);
}
