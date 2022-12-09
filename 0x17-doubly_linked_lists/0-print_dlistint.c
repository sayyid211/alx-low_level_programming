#include "lists.h"
/**
 * print_dlistint - prints a dobly linked list
 *
 * @h: the list
 * Return: nodes count
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	if (h == NULL)
		return (nodes);
	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
