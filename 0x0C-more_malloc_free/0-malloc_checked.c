#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocates mem using malloc
 * @b: arg
 * Return: pointer to p on success
 * 98 for insufficient memory
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	while (1)
	{
		if (p == NULL)
			exit(98);
		return (p);
	}
}
