#include "main.h"

/**
 * clear_bit - clears the bit at an index
 * @n: given number
 * @index: index to clear
 * Return: Success(1) or failure(-1)
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n ^= (1 << index);
	return (1);
}
