#include "main.h"

/**
 * array_range - Creates an array of ints using malloc
 *
 * @min: first and low bound int
 * @max: last and upper bound int
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *p, i = 0;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (null);

	while (min <= max)
	{
		p[i] = min++;
		i++;
	}
	return (p);
}
