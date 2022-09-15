#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(long a, long b, long c)
{
	long temp;

	if (a >= b)
	{
		temp = a;
		if (temp >= c)
		{
			return (temp);
		}
		else
		{
			return (c);
		}
	}
	else
	{
		temp = b;
		if (temp >= c)
		{
			return (temp);
		}
		else
		{
			return (c);
		}
	}
}
