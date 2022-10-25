#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of list
 *
 * @head: The first node's pointer
 *
 * @n: the nodes of the list passed as args
 *
 * Return: address of added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	if (*head == NULL)
		return (NULL);

	new = (listint_t *)malloc(sizeof(listint_t));

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
