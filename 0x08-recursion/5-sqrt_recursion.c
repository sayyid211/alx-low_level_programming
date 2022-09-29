#include "main.h"
int sqr(int n, int x);
/**
 * _sqrt_recursion - recursively compute a sqrt
 * @n: arg
 * Return: sqrt of n
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (sqr(n, i));
}

/**
 * sqr - checks if x is sqrt of n
 * @n: sqr
 * @x: sqrt
 * Return: sqrt or error
 */

int sqr(int n, int x)
{
	if (x * x == n)
	{
		return (x);
	}
	else if (x < n / x)
	{
		return (sqr(n, x + 1));
	}
	else if (x > n / x)
	{
		return (-1);
	}
	return (-1);
}
