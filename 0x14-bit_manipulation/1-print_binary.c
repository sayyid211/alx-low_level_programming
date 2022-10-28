#include "main.h"

/**
 * print_binary - prints a number in base 2
 *
 * @n: dec num
 */
void print_binary(unsigned long int n)
{
	char binary = NULL;

	if (n == 0)
		_putchar('0');
	while (n)
	{
		binary = ((n & 1) == 0 ? '0' : '1') + binary;
		_putchar(binary);
		n >>= 1;
	}
