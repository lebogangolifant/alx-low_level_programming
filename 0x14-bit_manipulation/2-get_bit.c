#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: The number containing the bit
 * @index: The index of the bit to retrieve, starting from 0
 *
 * Return: The value of the bit at the given index, or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	for (i = 0; i < index; i++)

		n >>= 1;

	return (n & 1);
}
