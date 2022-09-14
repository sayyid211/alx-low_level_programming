#include "main.h"

/**
 * main - Entry point
 *
 * Return: success
 */

int main(void)
{
	unsigned long x = 0;
	unsigned long y = 1;
	unsigned long z = 0;
	unsigned long sum = 0;

	while (z <= 4000000)
	{
		z = x + y;
		x = y;
		y = z;
		if (z % 2 == 0)
			sum += z;
	}
	printf("%lu\n", sum);
	return (0);
}
