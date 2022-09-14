#include "main.h"

/**
 * main - Entry point
 * Return: Success
 */

int main(void)
{
	unsigned long a = 0;
	unsigned long b = 1;
	unsigned long sum = 1;
	int counter = 0;

	while (counter < 98)
	{
		printf("%lu, ", sum);
		sum = a + b;
		b = sum;
		a = b;
		counter++;
	}
	if (counter == 98)
		printf("%lu\n", sum);
	return (0);
}
