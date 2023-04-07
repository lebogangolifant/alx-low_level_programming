#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the unsigned long int that contains the bit to modify.
 * @index: The index, starting from 0, of the bit to set to 0.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_selector;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bit_selector = 1 << index;

	*n &= ~bit_selector;

	return (1);
}

