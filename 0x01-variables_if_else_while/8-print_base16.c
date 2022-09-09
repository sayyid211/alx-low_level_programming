#include <stdio.h>

/**
 * main - Entry point
 *
 * x: 0-9
 * y: a-f
 * Return: success
 */

int main(void)
{
	char x, y;

	x = '0';
	y = 'a';
	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (y <= 'f')
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
