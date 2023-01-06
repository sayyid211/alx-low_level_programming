#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: Table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int id, end;
	hash_node_t *tmp;

	if (!ht)
		return;
	printf("{");
	for (id = 0, end = 1; id < ht->size; id++)
	{
		for (tmp = ht->array[id]; tmp != NULL; tmp = tmp->next)
		{
			printf("%s'%s': '%s'", end == 1 ? "" : ",",
			       tmp->key, tmp->value);
			       end = 0;
		}
	}
	printf("}\n");
}
