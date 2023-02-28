#include <stdio.h>
#include "main.h"

/**
 * _atoi - string to integer
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int result, sign, digit;

	result = 0;
	sign = 1;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
		{
			sign = -1;
		}
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';

		if (result > (INT_MAX - digit) / 10)
		{
			if (sign == -1)
			{
				return (INT_MIN);
			}
			else
			{
				return (INT_MAX);
			}
		}
		result = result * 10 + digit;
		s++;
	}
	return (sign * result);
}
