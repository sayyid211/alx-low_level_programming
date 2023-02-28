#include <stdio.h>

/**
 * main - Entry point
 * Return: success
 */

int main(void)
{
	long n, div;

	n = 612852475143;

	for (div = 2; div < n; div++)
	{
		while (n % div == 0)
		{
			n = n / div;
		}
	}
	printf("%lu\n", div);
	return (0);
}
