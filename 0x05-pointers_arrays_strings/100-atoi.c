#include "main.h"
#include <limits.h>

/**
 * _atoi - function that convert a string to an integer.
 * @s: Converts string to integer
 * Return: Returns converted string
 */

int _atoi(char *s)
{
	int sign = 1;
	int num = 0;
	int digit;

	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\r'
			|| *s == '\f' || *s == '\v')
	{
		s++;
	}

	if (*s == '-')
	{
		sign = -1;
		s++;
	}

	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		digit = *s - '0';
		if (num > INT_MAX / 10 || (num == INT_MAX / 10 && digit > INT_MAX % 10))
		{
			return (sign == 1 ? INT_MAX : INT_MIN);
		}

		num = num * 10 + digit;
		s++;
	}
	return (num * sign);
}
