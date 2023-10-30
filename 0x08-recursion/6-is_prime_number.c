#include "main.h"
/**
 * is_prime_number - checks if a number is prime recursively
 *
 * @n: arg
 *
 * Return: 1 (true) or 0 (false)
 */

int is_prime_number(int n)
{
	int i = 4;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);
	return (prime(n, i));
}

/**
 * prime - checks primality wrt x
 * @n: numerator
 * @x: denominator
 * Return: 1 || 0
 */

int prime(int n, int x)
{
	if (n % x == 0)
		return (0);
	if (x <= n / 2)
		return (prime(n, x + 1));
	return (1);
}
