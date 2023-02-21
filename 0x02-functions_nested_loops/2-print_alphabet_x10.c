#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 *
 */

void print_alphabet_x10(void)
{
	char chr;
	int i = 0;

	while (i <= 9)
	{
		for (chr = 'a'; chr <= 'z'; chr++)
		{
			_putchar(chr);
		}

		_putchar('\n');

		i++;
	}
}
