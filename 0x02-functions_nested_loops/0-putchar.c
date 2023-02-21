#include "main.h"

/**
 * main - Prints _putchar, followed by a new line.
 *
 * Return: Returns 0
 *
 */

int main(void)
{
	char c[8] = "_putchar";

	int i = 0;

	while (i < 8)

	{
		_putchar(c[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
