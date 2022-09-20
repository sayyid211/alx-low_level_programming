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
		if (x % 2 != 0)
		{
			_putchar(str[x]);
		}
		else
		{
			break;
		}
		x += 2;
	}
	_putchar('\n');
}
