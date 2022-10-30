#include "main.h"

/**
 * set_bit - sets the value of a given bit to 1
 *
 * @n: given number
 * @index: bit to alter
 * Return: Success(1) or failure (-1)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n ^= (1 << index);
	return (1);
}
