#include "main.h"
/**
 * _strlen - computes length of str
 * @c: arg
 * Return: length of str
 */
unsigned int _strlen(const char *c)
{
	unsigned int i = 0;

	while (c[i] != '\0')
		i++;
	return (i);
}

/**
 * binary_to_uint - converts bits to unsigned int
 *
 * @b: arg
 *
 * Return: uint of b
 */

unsigned int binary_to_uint(const char *b)
{
	int i = _strlen(b) - 1;
	unsigned int x, y = 0, p = 1;

	while (i >= 0)
	{
		if (!b)
		{
			return (0);
		}
		else if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
		else
		{
			x = b[i] - '0';
			y = y + (x * p);
			p *= 2;
		}
		i--;

	}
	return (y);
}
