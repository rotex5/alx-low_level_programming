#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table
 * @key: The key of the new element
 * @value: The value of the new element
 * Return: 1 on success, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *entry = NULL, *cursor = NULL;

	if (!key || !value || !ht || strlen(key) == 0)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	cursor = ht->array[idx];

	if (cursor)
	{
		while (cursor)
		{
			if (strcmp(cursor->key, key) == 0)
			{
				free(cursor->value);
				cursor->value = strdup(value);
				return (1);
			}
			cursor = cursor->next;
		}
	}

	entry = malloc(sizeof(hash_node_t));
	if (!entry)
		return (0);

	entry->key = strdup(key);
	entry->value = strdup(value);
	entry->next = NULL;

	if (ht->array[idx] != NULL)
		entry->next = ht->array[idx];

	ht->array[idx] = entry;

	return (1);
}
