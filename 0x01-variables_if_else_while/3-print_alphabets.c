#include <stdio.h>

/**
 * main - Entry point
 * x: small letters
 * y: capital letters
 * Return: Success
 */

int main(void)
{
	int x = 97;
	int y = 65;

	while (x < 123)
	{
		putchar(x);
		x++;
	}
	while (y < 91)
	{
		putchar(y);
		y++;
	}
	putchar('\n');

	return (0);
}
