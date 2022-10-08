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
	if (p == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		/* allocate spaces for height on width */
		p[i] = malloc(width * sizeof(int));

		/* check for NULL cells */
		/* if cell is NULL, free the space */
		/*if (p[i] == NULL)
		{
			while (i >= 0)
			{
				free(p[i]);
				i--;
			}
			free(p);
			return (NULL);
			}*/
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
