#include "main.h"

/**
 * _atoi - string to integer
 * @s: string
 * Return: int
 */

int _atoi(char *s)
{
	int result, sign, i;

	result = 0;
	sign = 1;
	i = 0;

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
		i++;
	}
	return (sign * result);
}
