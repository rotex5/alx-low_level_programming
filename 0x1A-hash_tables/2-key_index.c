#include "hash_tables.h"

/**
 * key_index - this function returns the index where
 * a key is stored.
 * @key: the key of the entry to look for
 * @size: the size of the array
 * Return: index where key/value pair is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
