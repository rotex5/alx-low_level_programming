#include "hash_tables.h"
/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: hash table
 * @key: The key to the data
 * Return: the value associated with key, else NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *cursor = NULL;

	if (!ht || !key || !(*key))
		return (NULL);

	cursor = ht->array[key_index((unsigned char *) key, ht->size)];

	while (cursor && strcmp(key, cursor->key) != 0)
		cursor = cursor->next;

	return (cursor ? cursor->value : NULL);
}
