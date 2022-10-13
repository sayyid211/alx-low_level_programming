#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - runs functions passed as array params
 * @array: array to store functions
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i; /* iterator val */

	while (1)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
