#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an int in a given set of inputs
 * @array: array to store args
 * @size: size of the array
 * @cmp: pointer to function checking for ints
 * Return: index of first int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i; /* iterator */

	if (size <= 0)
		return (-1);
	if (!cmp || !array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
