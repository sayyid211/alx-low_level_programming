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
	int **p = (int**)malloc(width *sizeof(int) * height);

	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
