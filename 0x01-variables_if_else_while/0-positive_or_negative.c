#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Success
 */

int main(void)
{
	int n;
	if (n <= 0)
	{
		printf("%d, is negative",&n);
	}
	else if (n == 0)
	{
		printf("%d, is zero", &n);
	}
	else
	{
		printf("%d, is positive", &n);
	}
	return (0);
}
