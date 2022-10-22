#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: address of node 0
 * Return: Nodes count
 */

size_t print_list(const list_t *h)
{
	size_t count = 1;

	if (h == NULL)
		return (0);/* number of nodes is 0 */
	while (h->next != NULL)
	{
		/* str = NULL len 0 str "nil" */
		if (h->str == NULL)
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		count++;
	}
	printf("[%d] %s\n", h->len, h->str);
	return (count);
}
