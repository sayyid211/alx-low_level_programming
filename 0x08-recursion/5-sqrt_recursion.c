#include "main.h"
/**
 * _sqrt_recursion - recursively compute the sqrt of a number
 *
 * @n: square
 *
 * Return: sqrt(n) of -1
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
 * @n: square
 * @x: sqrt
 * Return: x if true or -1 if false
 */
int sqr(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x < n / x)
		return (sqr(n, x + 1));
	if (x > n / x)
		return (-1);
	return (-1);
}
