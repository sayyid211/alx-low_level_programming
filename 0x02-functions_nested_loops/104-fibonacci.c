#include "main.h"

/**
 * main - Entry point
 * Return: Success
 */

int main(void)
{
	double a = 1;
	double b = 1;
	double sum = 1;
	int counter = 0;

	while (counter < 98)
	{
		printf("%0.f, ", sum);
		sum = a + b;
		b = sum;
		a = b;
		counter++;
	}
	if (counter == 97)
		printf("%0.f\n", sum);
	return (0);
}
