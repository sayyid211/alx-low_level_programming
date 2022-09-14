#include "main.h"

/**
 * main - entry point
 *
 * Return: success
 */
int main(void)
{
	int x = 0;
	int sum = 0;

	for (;x < 1024; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
			sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
