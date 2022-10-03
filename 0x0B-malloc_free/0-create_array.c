#include "main.h"
#include <stdlib.h>

char *_carr(unsigned int size, char c);

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: charto store in the array
 *
 * Return: the array elements
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (0);
	else
		return (_carr(size, c));
}

/**
 * _carr -makes the actual array
 * @size: size of the array
 * @c: char to fill
 * Return: pointer to parray
 */

char *_carr(unsigned int size, char c)
{
	char *parray;
	unsigned int i; /* iterator for parray indices */

	parray = malloc(size * sizeof(char));
	i = 0;

	while (i < size)
	{
		parray[i] = c;
		i++;
	}
	return (parray);
}
