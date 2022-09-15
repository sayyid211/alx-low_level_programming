#include "main.h"
/**
 * print_diagonal - print
 * @n: arg
 */

void print_diagonal(int n)
{
	int i = 0;
	int x = 0;
	int y = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (; i < n; i++)
		{
			while (y <= x)
			{
				_putchar(' ');
				y++;
			}
			y = 0;
			_putchar('\\');
			_putchar('\n');
			x++;
		}
	}
}
