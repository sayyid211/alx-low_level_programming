#include "lists.h"

/**
 * list_len: counts length of str
 * @h: pointer to node 0
 * Return: nodes count
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	if (h == NULL)
		return (0);
	while (h->next != NULL)
	{
		h= h->next;
		count++;
	}
	return (count + 1);
}
