#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a previously allocated grid 
 *
 * @grid: pointer to grid
 * @height: height of grid
 */

void free_grid(int **grid, int height)
{
	while (height)
	{
		free(grid);
	}
}
