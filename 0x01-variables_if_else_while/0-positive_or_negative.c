#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * n: random number to be tested on number line
 * Return: Success
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* check the status of n*/
	if (n < 0)
	{
		printf("%i is negative\n",n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else
	{
		printf("%i is positive\n", n);
	}
	return (0);
}
