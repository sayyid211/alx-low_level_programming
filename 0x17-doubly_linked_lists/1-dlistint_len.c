#include "lists.h"

/**
 * dlistint_len - returns the length of a list
 * @h: list to count
 * Return: length of lish
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t length = 0;

	if (h == NULL)
		return (length);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		h = h->next;
		length++;
	}
	return (length);
}
