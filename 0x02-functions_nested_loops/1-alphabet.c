#include "main.h"

/**
 * print_alphabet - prints lower case alphabets
 */

void print_alphabet(void)
{
	int x = 97;

	while ( x < 123)
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
