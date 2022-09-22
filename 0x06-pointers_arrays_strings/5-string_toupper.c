#include "main.h"

/**
 * string_toupper - makes upper case
 * @c: arg
 * Return: uppercase
 */

char *string_toupper(char *c)
{
	int i = 0; /* index */

	for (; c[i] != '\0'; i++)
	{
		if (c[i] >= 97 && c[i] < 123)
			c[i] -= 32;
	}
	return (c);
}
