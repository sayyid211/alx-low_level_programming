#include <stdio.h>

/**
 * main - Entry point
 *
 * x: var
 * Return: Success
 */

int main(void)
{
	int x;

	x = 48;
	while (x < 58)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
