#include "main.h"
#include "main.h"
/**
 * rev_string - function for reversing string
 * @s: argument to keep string
 */

void rev_string(char *s)
{
	int x = 0;
	int z = 0;
	char *tp = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	*tp = *s;
	while (x != 0)
	{
		*(s + z) = *(tp + x);
		x--;
		z++;
	}
}
