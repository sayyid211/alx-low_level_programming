#include "main.h"

/**
 * _abs - returns the absolute value of an integer
 *
 * @x: arg
 * Return: abs val
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (-1 * x);
	}
	else
	{
		return (x);
	}
}

/**
 * print_last_digit - return the last digit of an integer
 * @x: arg
 * Return: last digit
 */

int print_last_digit(int x)
{
	int c = _abs(x % 10) + 48;

	_putchar(c);
	return (_abs(x % 10));
}
