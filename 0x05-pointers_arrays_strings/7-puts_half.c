#include "main.h"

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
 * puts_half - prints half of a string
 * @str: arg
 */
void puts_half(char *str)
{
	int n = (_strlen(str) - 1) / 2;

	if (n % 2 == 0)
	{
		while (n < (_strlen(str) - 1))
		{
			_putchar(str[n + 1]);
			n++;
		}
	}
	else
	{
		while (n < (_strlen(str) - 1))
		{
			_putchar(str[n + 2]);
			n++;
		}
	}
	_putchar('\n');
}
