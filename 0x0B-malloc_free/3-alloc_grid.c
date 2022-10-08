#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - makes a 2 dim array
 * @width: x axis
 * @height: y axix
 *
 * Return: pointer to grid
 */

int **alloc_grid(int width, int height)
{
	int i, j; /* iterators for dimentions */
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		/* allocate spaces for height on width */
		p[i] = malloc(width * sizeof(int));

		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
