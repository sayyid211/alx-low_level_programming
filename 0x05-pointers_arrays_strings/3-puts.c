#include "main.h"

/**
 * _puts - print str
 * @str: arg
 */

void _puts(char *str)
{
	int counter = 0;

	while (*(str + counter) != 0)
	{
		_putchar(str[counter]);
		counter++;
	}
}
