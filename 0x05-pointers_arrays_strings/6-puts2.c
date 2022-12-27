#include "main.h"

/**
 * puts2 - print str jumping a char
 * @str: arg
 */

void puts2(char *str)
{
	int x = 0;
	int y = 0;

	while (*(str + x) != '\0')
	{
		x++;
	}
	while (y < x)
	{
		_putchar(*(str + y));
		y = y + 2;
	}
	_putchar('\n');
}
