#include "main.h"
#include <unistd.h>
/**
 * print_binary - prints a number in base 2
 *
 * @n: dec num
 */
void print_binary(unsigned long int n)
{
	unsigned long int binary;

	if (n == 0)
		_putchar('0');
	while (n)
	{
		binary = n & 1 ? '1' : '0';
		_putchar(binary);
		n >>= 1;
	}
}
