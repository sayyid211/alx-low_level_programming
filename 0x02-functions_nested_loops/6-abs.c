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
