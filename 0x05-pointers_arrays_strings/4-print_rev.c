#include "main.h"
/**
 * _strlen - computes the length of a string
 * @s: argument, pointer int to string array
 * Return: size of string array
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}

/**
 * print_rev - print reverse str
 * @s: arg
 */

void print_rev(char *s)
{
	int length = _strlen(s) - 1;

	while (length >= 0)
	{
		_putchar(*(s + length));
		length--;
	}
	_putchar('\n');
}
