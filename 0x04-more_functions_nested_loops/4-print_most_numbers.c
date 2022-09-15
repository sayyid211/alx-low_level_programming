#include "main.h"
/**
 * print_most_numbers - print nums excluding 2 n 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != '4' && i != '2')
			_putchar(i);
		continue;
	}
	_putchar('\n');
}
