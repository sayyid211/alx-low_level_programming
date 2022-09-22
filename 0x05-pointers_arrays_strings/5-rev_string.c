#include "main.h"

/**
 * rev_string - function for reversing string
 * @s: argument to keep string
 */

void rev_string(char *s)
{
	int x = 0;
	int y; /* size of string */
	char temp; /* a temporary store */

	/* get length of s */
	while (*(s + x) != '\0')
	{
		x++;
	}
	y = x - 1;

	x = 0; /* make x 0 to iterate through s */

	/* get reverse val of temp to s */
	while (x < (y / 2))
	{
		temp = *(s + x);
		*(s + x) = *(s + (y - x));
		*(s + (y - x)) = temp;
		x++;
	}
}
