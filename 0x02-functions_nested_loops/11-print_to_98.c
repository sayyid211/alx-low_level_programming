#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - print a range up or down to 98
 * @n: arg
 */

void print_to_98(int n)
{
	while (n != 98)
	{
		if (n > 98)
		{
			puts(n);
			n -= 1;
		}
		else if (n == 98)
		{
			puts(n);
		}
		else
		{
			puts(n);
			n += 1;
		}
	}
	_putchar('\n');
}
