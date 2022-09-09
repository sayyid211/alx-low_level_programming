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
		printf("%ls, is negative",&n);
	}
	else if (n == 0)
	{
		printf("ls, is zero", &n);
	}
	else
	{
		printf("ls, is positive", &n);
	}
	return (0);
}
