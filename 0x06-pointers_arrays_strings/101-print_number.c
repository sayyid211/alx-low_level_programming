#include "main.h"

/**
 * print_number - prints a number
 * @n: arg
 */

void print_number(int n)
{
	unsigned int num  = n;

	/* if n is negative print a minus */

	if (n < 0)
	{
		_putchar('-');
		num *= -1;
	}

	/* remove the last digit and recur */

	if (num / 10)
		print_number(num / 10);

	/* print last digit */
	_putchar((num % 10) + '0');
}
