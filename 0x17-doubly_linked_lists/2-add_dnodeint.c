#include "lists.h"

/**
 * add_dnodeint - add a node to a dobly linked list
 * @head: head
 * @n: content of node
 * Return: pointer to new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *h;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	node->next = h;

	if (h != NULL)
		h->prev = node;
	*head = node;
	return (node);
}
