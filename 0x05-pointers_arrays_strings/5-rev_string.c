#include "main.h"

/**
 * rev_string - function for reversing string
 * @s: argument to keep string
 */

void rev_string(char *s)
{
	int x = 0;
	int y;
	char *temp = s; /* copy arg to temp */

	/* get length of temp */
	while (*(temp + x) != 0)
	{
		x++;
	}
	y = x - 1;
	
	/* get reverse val of temp to s */
	while (y <= x && y >= 0)
	{
		s[(x - 1) - y] = temp[y];
		y--;
	}
}
