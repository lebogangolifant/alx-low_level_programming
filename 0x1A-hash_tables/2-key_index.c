#include "hash_tables.h"

/**
 * key_index - Computes the index of a key in a hash table.
 * @key: The key string.
 * @size: The size of the array of the hash table.
 *
 * Return: The computed index for the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value = hash_djb2(key);
	unsigned long int index = hash_value % size;

	return (index);
}
