#include "main.h"

/**
 * get_bit - gets the bit at an index
 *
 * @n: number
 * @index: index
 * Return: index or error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 80))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
