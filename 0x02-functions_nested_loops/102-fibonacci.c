#include "main.h"

/**
 * main - Entry point
 * Return: Success
 */

int main(void)
{
	int count = 0;
	unsigned long x = 1;
	unsigned long y = 1;
	unsigned long z = 0;

	while (count < 49)
	{
		printf("%lu, ", y);
		z = x + y;
		x = y;
		y = z;
		count++;
	}
	printf("%lu", y);
	putchar('\n');
	return (0);
}
