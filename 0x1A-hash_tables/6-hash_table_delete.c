#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned int id;
	hash_node_t *tmp, *aux;

	if (!ht || !ht->array)
		return;

	for (id = 0; id < ht->size; id++)
	{
		tmp = ht->array[id];
		while (tmp != NULL)
		{
			aux = tmp->next;
			free(tmp->value);
			free(tmp->key);
			free(tmp);
			tmp = aux;
		}
	}
	free(ht->array);
	free(ht);
}
