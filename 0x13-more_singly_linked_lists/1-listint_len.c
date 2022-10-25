#include "lists.h"

/**
 * listint_len - computes the length of a linked list
 *
 * @h: pointer to list nodes
 *
 * Return: size of list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
