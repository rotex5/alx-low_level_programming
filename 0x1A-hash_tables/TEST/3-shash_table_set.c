#include "hash_tables.h"

/**
 * make_shash_node - makes a node for the sorted hash table
 * @key: key for the data
 * @value: data to be stored
 *
 * Return: pointer to the new node, or NULL on failure
 */
shash_node_t *make_shash_node(const char *key, const char *value)
{
	shash_node_t *shn;

	shn = malloc(sizeof(shash_node_t));
	if (!shn)
		return (NULL);

	shn->next = NULL;
	shn->snext = NULL;
	shn->sprev = NULL;

	shn->key = strdup(key);
	if (!shn->key)
	{
		free(shn);
		return (NULL);
	}

	shn->value = strdup(value);
	if (!shn->value)
	{
		free(shn->key);
		free(shn);
		return (NULL);
	}
	return (shn);
}

/**
 * add_node - add a node
 * @table: the sorted hash table
 * @node: the node to add
 *
 * Return: void
 */
void add_node(shash_table_t *table, shash_node_t *node)
{
	shash_node_t *cursor;

	if (!table->shead || !table->stail)
	{
		table->shead = table->stail = node;
		return;
	}
	cursor = table->shead;
	while (cursor)
	{
		if (strcmp(node->key, cursor->key) < 0)
		{
			node->snext = cursor;
			node->sprev = cursor->sprev;
			cursor->sprev = node;
			if (node->sprev != NULL)
				node->sprev->next = node;
			else
				table->shead = node;
			return;
		}
		cursor = cursor->snext;
	}
	node->sprev = table->stail;
	table->stail->snext = node;
	table->stail = node;
}
/**
 * shash_table_set - sets a key to a value in the hash table
 * @ht: sorted hash table
 * @key: key to the data
 * @value: data to add
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	shash_node_t *sentry = NULL, *cursor = NULL;

	if (!ht || !key || !value)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	cursor = ht->array[idx];
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
	sentry = make_shash_node(key, value);
	if (sentry == NULL)
		return (0);

	sentry->next = ht->array[idx];
	ht->array[idx] = sentry;
	add_node(ht, sentry);
	return (1);
}
