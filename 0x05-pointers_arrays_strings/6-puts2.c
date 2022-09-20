#include "main.h"

/**
 * puts2 - print str jumping a char
 * @str: arg
 */

void puts2(char *str)
{
	int x = 0; /* counter */

	while (*(str + x) != '\0')
	{
		_putchar(str[x]);
		x += 2;
	}
	_putchar('\n');
}
