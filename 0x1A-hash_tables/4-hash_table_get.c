#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - gets value of a hash table key
 * @ht: hash table
 * @key: index to check
 * Return: value at key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int id;
	hash_node_t *tmp;

	if (!ht || !strlen(key) || !ht->array || !ht->size)
		return (NULL);

	id = key_index((unsigned char *) key, ht->size);

	tmp = ht->array[id];

	if (tmp == NULL)
		return (NULL);
	for (; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);
}
