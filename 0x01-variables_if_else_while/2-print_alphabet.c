#include <stdio.h>

/**
 * main - Entry point
 *
 * x: variable to hold alphabets
 * Return: Success
 */

int main(void)
{
	int x = 97;

	while (x < 123)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
