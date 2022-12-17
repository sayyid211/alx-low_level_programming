#include "lists.h"

/**
 * add_dnodeint_end - add a node to the end of a dllist
 * @head: head of the node
 * @n: value of list element
 * Return: Address of the new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *i;
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));

	node->n = n;
	node->next = NULL;

	i = *head;

	if (i != NULL)
	{
		while(i->next != NULL)
			i = i->next;
		i->next = node;
	}
	else
	{
		*head = node;
	}
	node->prev = i;
	return (node);
}
