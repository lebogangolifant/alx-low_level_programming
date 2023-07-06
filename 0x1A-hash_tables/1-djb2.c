#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 hash function.
 * @str: The string to hash.
 *
 * Return: The computed hash value.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
