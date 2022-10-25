#include "lists.h"

/**
 * print_listint - prints the elements of a list
 *
 * @h: pointer to linked list
 *
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
