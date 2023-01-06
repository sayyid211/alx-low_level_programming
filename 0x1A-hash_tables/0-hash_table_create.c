#include "hash_tables.h"

/**
 * hash_table_create - makes a hash table
 *
 * @size: number of buckets in hash table
 *
 * Return: made hash table or null on failure
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table;

	new_hash_table = calloc(1, sizeof(hash_table_t));
	if (new_hash_table == NULL)
		return (NULL);

	new_hash_table->size = size;
	new_hash_table->array = calloc(size, sizeof(hash_node_t *));
	if (new_hash_table->array == NULL)
	{
		free(new_hash_table);
		return (NULL);
	}
	return (new_hash_table);
}
