#include "main.h"

/**
 * print_alphabet - Prints the alphabet
 *
 * Return
 *
 */

void print_alphabet(void)
{
	char chr;

	chr = 'a';

	while (chr <= 'z')
	{
		_putchar(chr);
		chr++;
	}

	_putchar('\n');
}
