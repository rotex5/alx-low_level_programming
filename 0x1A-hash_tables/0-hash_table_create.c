#include "hash_tables.h"
#include <stdlib.h>


hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i= 0;
	hash_table_t *hashtable = malloc(sizeof(hash_table_t) * 1);

	hashtable->array = malloc(sizeof(hash_node_t*) * size);

	while(i < size)
	{
		hashtable->array[i] = NULL;
		i++;
	}

	return hashtable;
}
