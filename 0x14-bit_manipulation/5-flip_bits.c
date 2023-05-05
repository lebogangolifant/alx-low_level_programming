#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from
 *             one number to another
 * @num1: The first number
 * @num2: The second number
 *
 * Return: The number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned long int bitwise_diff = num1 ^ num2;
	unsigned int bit_count = 0;
	unsigned int i;

	for (i = 0; i < (sizeof(bitwise_diff) * 8); i++)
	{
		if ((bitwise_diff >> i) & 1)
			bit_count++;
	}

	return (bit_count);
}

