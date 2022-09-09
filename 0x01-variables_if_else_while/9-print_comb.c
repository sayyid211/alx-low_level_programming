#include <stdio.h>
/**
 * main - Entry point
 *
 * program prints arabic numerals separated  by commas
 * Return: success
 */
int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		if (x < 57)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
	return (0);
}
