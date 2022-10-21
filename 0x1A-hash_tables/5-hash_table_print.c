#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - dump hash table as a dictionary
 * @ht: The hash table
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t  *cursor = NULL;
	unsigned long int i = 0, toggle = 1;

	if (!ht)
		return;

	printf("{");

	for (; i < ht->size; i++)
	{
		cursor = ht->array[i];
		while (cursor)
		{
			if (toggle)
				printf(", ");
			printf("'%s': '%s'", cursor->key, cursor->value);
			toggle = 0;

			if (cursor->next != NULL)
			{
				printf(", ");
				toggle = 1;
			}
			cursor = cursor->next;
		}
	}


	printf("}\n");
}
