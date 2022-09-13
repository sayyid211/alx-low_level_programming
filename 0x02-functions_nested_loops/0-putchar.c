#include "main.h"
/**
 * putchar - print characters to stdout
 * i: character to print
 * str: chars for x to loop through
 * Return: Success
 */
int putchar(int)
{
	char xint i = 0;
	char str[] = "_putchar";

	while (str[i] != '\n')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
