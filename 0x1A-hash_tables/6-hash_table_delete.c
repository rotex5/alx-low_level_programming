#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: The hash table to  be deleted.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cursor = NULL, *del_entry;
	unsigned long int id = 0;

	if (!ht)
		return;

	for (; id < ht->size ; id++)
	{
		cursor = ht->array[id];

		while (cursor)
		{
			del_entry = cursor;
			free(del_entry->key);
			free(del_entry->value);
			free(del_entry);

			cursor = cursor->next;
		}
	}

	free(ht->array);
	free(ht);
}
