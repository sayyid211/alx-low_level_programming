#include "hash_tables.h"
#include <string.h>

/**
 * create_node - create a hash node
 * @key: index
 * @value: value at key
 * Return: address of made node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	char *d_key, *d_val;
	hash_node_t *node;

	d_key = strdup(key);
	if (!d_key)
		return (NULL);

	d_val = strdup(value);
	if (!d_val)
	{
		free(d_key);
		return (NULL);
	}

	node = calloc(1, sizeof(hash_node_t));
	if (!node)
	{
		free(d_key), free(d_val);
		return (NULL);
	}
	node->next = NULL;
	node->key = d_key;
	node->value = d_val;
	return (node);
}

/**
 * hash_table_set - Adds element to hash table
 * @ht: Hash table
 * @key: key pair
 * @value: key value
 * Return: 1 Success 0 failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int id;
	hash_node_t *tmp;
	char *d_val;

	if (!ht || !key || !strlen(key) || !ht->array || !ht->size)
		return (0);

	id = key_index((unsigned char *) key, ht->size);

	for (tmp = ht->array[id]; tmp != NULL; tmp = tmp->next)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			d_val = strdup(value);
			if (!d_val)
				return (0);

			free(tmp->value);
			tmp->value = d_val;
			return (1);
		}
	}
	tmp = create_node(key, value);
	if (!tmp)
		return (0);
	tmp->next = ht->array[id];
	ht->array[id] = tmp;
	return (1);
}
