#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: arg
 * Return: true or false
 */

int _isdigit(int c)
{
	if (c >= 48 && c < 58)
		return (1);
	else
		return (0);
}
