#include <stdio.h>

/**
 * main - Entry point
 *
 * x: var for holding characters
 * Return: Success
 */

int main(void)
{
	int x;

	x = 122;
	while (x > 96)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
