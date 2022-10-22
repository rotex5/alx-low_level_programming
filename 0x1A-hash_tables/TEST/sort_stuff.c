#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - Creates a hash table
 * @size: size of the hash table
 * Return: A pointer to table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	shash_table_t *sht;

	if (size == 0)
		return (NULL);
	sht = malloc(sizeof(shash_table_t));
	if (!sht)
		return (NULL);

	sht->size = size;
	sht->shead = NULL;
	sht->stail = NULL;
	sht->array = malloc(sizeof(shash_table_t *) * size);
	if (!sht->array)
	{
		free(sht);
		return (NULL);
	}
	for (; i < size; i++)
		sht->array[i] = NULL;
	return (sht);
}

/**
 * make_shash_node - makes a node for the sorted hash table
 * @key: key
 * @value: data/value
 * Return: returns pointer to the new node else NULL if failed
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
 * add_node - Add a node
 * @table: hash table
 * @node: node to be added
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
 * shash_table_set - populates hash table
 * @ht: The hash table
 * @key: The key
 * @value: The value/date
 * Return: 1 on success, else 0
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
	sentry = ht->array[idx];
	ht->array[idx] = sentry;
	add_node(ht, sentry);
	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key
 * @ht: hash table
 * @key: The key to the data
 * Return: the value associated with key, else NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int idx;
	shash_node_t *cursor;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	cursor = ht->array[idx];

	if (cursor == NULL)
		return (NULL);

	while (cursor)
	{
		if (strcmp(cursor->key, key) == 0)
			return (cursor->value);

		cursor = cursor->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a stored hash table sorted order
 * @ht: The hash table
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *cursor = NULL;

	if (!ht)
		return;

	printf("{");

	cursor = ht->shead;

	if (cursor)
	{
		printf("'%s': '%s'", cursor->key, cursor->value);
		cursor = cursor->snext;
	}

	while (cursor)
	{
		printf(", '%s': '%s'", cursor->key, cursor->value);
		cursor = cursor->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints a sorted hash table in reverse
 * @ht: hash table to print
 * Return: void
 */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *cursor = NULL;

	if (!ht)
		return;

	printf("{");

	cursor = ht->stail;

	if (cursor)
	{
		printf("'%s': '%s'", cursor->key, cursor->value);
		cursor = cursor->sprev;
	}

	while (cursor)
	{
		printf(", '%s': '%s'", cursor->key, cursor->value);
		cursor = cursor->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes the hash table
 * @ht: The hash table
 * Return: void
 */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *cursor = NULL, *del_entry;
	unsigned long int idx = 0;

	if (!ht)
		return;

	for (; idx < ht->size ; idx++)
	{
		cursor = ht->array[idx];

		while (cursor)
		{
			del_entry = cursor;
			free(del_entry->key);
			free(del_entry->value);
			free(del_entry);

			cursor = cursor->snext;
		}
	}

	free(ht->array);
	free(ht);
}
