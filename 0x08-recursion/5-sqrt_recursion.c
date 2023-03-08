#include "main.h"
#include <math.h>

int power_root(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (power_root(n, 1) ? (int)sqrt(n) : -1);
}

/**
 * power_root - check natural square root
 * @n: input number
 * @i: counter
 * Return: 1 if has square root, 0 if not
 */

int power_root(int n, int i)
{
	if (i * i == n)
		return (1);
	if (i * i > n)
		return (0);
	return (power_root(n, i + 1));
}

