#include "hash_tables.h"

/**
 * key_index - a function that gives you the index of a key.
 * @key: the key
 * @size: size of the array of the hash table
 * Return: unsigned long int
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!size)
		return (0);

	return (hash_djb2(key) % size);
}
