#include "main.h"

/**
 * print_last_digit - return the last digit of an integer
 * @x: arg
 * Return: last digit
 */

int print_last_digit(int x)
{
	int c = _abs(x % 10) + 48;

	_putchar(c);
	return (x % 10);
}
