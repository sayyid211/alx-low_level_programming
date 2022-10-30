#include "main.h"

/**
 * flip_bits - finds the bits needed to flip bits
 * @n: Number to check
 * @m: number of needed bits to flip n
 * Return: m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	unsigned long int bit = 0;

	while (flipped > 0)
	{
		bit += (flipped & 1);
		flipped >>= 1;
	}
	return (bit);
}
