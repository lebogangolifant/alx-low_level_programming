#include "main.h"

/**
 * factorial - computes the factorial of a given number
 * @n: the number to compute the factorial of
 *
 * Return: n or -1 if n is negative
 */

int factorial(int n)
{
	int i, result;

	if (n < 0)

		return (-1);

	if (n == 0)

		return (1);

	result = 1;

	for (i = 1; i <= n; i++)
		result *= i;

	return (result);
}
