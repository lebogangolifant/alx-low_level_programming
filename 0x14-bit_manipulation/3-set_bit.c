#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the unsigned long int to modify
 * @index: index of the bit to set, starting from 0
 *
 * Return: 1 if successful, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_selector;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
		return (-1);

	bit_selector = 1UL << index;

	*n |= bit_selector;

	return (1);
}
