#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted.
 *
 * Return: None.
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit_selector = 1UL << ((sizeof(unsigned long int)
				* 8) - 1);
	int i;
	int found_nonzero_digit = 0;

	for (i = 0; i < (int)(sizeof(unsigned long int) * 8); i++)
	{
		if ((n & bit_selector) || found_nonzero_digit)
		{
			found_nonzero_digit = 1;

			if (n & bit_selector)

				_putchar('1');
			else
				_putchar('0');
		}

		bit_selector >>= 1;
	}

	if (!found_nonzero_digit)
		_putchar('0');
}
