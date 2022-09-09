#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* check the status of n*/
	if (n <= 0)
	{
		printf("%i is negative",&n);
	}
	else if (n == 0)
	{
		printf("%i, is zero", &n);
	}
	else
	{
		printf("%i, is positive", &n);
	}
	return (0);
}
