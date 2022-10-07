#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * malloc_checked - allocates mem using malloc
 * @b: arg
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(p) * b);
	while (1)
	{
		if (p == NULL)
			exit(98);
		return (p);
	}
}
