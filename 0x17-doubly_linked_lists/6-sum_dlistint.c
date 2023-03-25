#include "lists.h"

/**
 * sum_dlistint - adds up all data (n) of a dlistint_t linked list
 *
 * @head: The list's head
 * Return: sum of all node values
 **/

int sum_dlistint(dlistint_t *head)
{
	int result;

	for (result = 0; head != NULL; head = head->next)
		result += head->n;
	return (result);
}
