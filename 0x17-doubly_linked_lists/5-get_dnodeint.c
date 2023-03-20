#include "lists.h"

/**
 * get_dnodeint_at_index - Return the nth node of a linked list
 *
 * @head: List head
 * @index: nth node to get
 * Return: pointer to the nth node
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t idx;

	for (idx = 0; head != NULL; head = head->next, idx++)
	{
		if (idx == index)
			return (head);
	}
	return (NULL);
}
