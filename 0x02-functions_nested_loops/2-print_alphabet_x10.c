#include "main.h"

/**
 * print_alphabet_x10 - print 10 rows with alphabets;
 */

void print_alphabet_x10(void)
{
	int x = 97;
	int row = 0;

	for (; row < 10; row++)
	{
		while (x < 123)
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		x = 97;
	}
}
