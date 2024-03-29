#include "main.h"
/**
 * _pow_recursion - computes a raised to power b
 *
 * @x: a
 * @y: b
 *
 * Return: a^b
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
