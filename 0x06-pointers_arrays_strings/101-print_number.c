#include "main.h"

/**
 * print_number - prints a number
 * @n: arg
 */

void print_number(int n)
{
	/* if n is negative print a minus */

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	/* remove the last digit and recur */

	if (n / 10)
		print_number(n / 10);

	/* print last digit */
	_putchar((n % 10) + '0');
}
