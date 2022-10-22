#include "hash_tables.h"
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
