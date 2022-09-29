#include "main.h"
int prime(int n, int x);

/**
 * is_prime_number - test for primality
 * @n: argument
 * Return: true or false
 */

int is_prime_number(int n)
{
	int i = 4;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (prime(n, i));
}

/**
 * prime - checks for primality wrt x
 * @n: numerator
 * @x: denominator
 * Return: true or false
 */

int prime(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}
	if (x <= n / 2)
	{
		return (prime(n, x + 1));
	}
	return (1);
}
