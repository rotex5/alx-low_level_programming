#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: hash table
 * @key: The key of the new element
 * Return: value associated with key or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cursor;
	unsigned long int idx;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	cursor = ht->array[idx];
	/*  no index means no entry */
	if (cursor == NULL)
		return (NULL);

/* walk through each entry in the slot, which could just be a single thing*/
	while (cursor)
	{
		if (strcmp(cursor->key, key) == 0)
			return (cursor->value);
		/* proceed to next key if available */
		cursor = cursor->next;
	}
	/* reaching here means there were >= 1 entries but no key match*/
	return (NULL);
}
