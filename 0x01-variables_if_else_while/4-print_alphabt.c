#include <stdio.h>

/**
 * main - Entry point
 *
 * x: var to hold alpha character
 * Return: Success
 */

int main(void)
{
	int x = 97;

	while (x < 123)
	{
		if (x != 101 && x != 113)
			putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
