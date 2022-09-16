#include "main.h"
/**
 * print_square - print a square
 * @size: length
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('\#');
				j++;
			}
			j = 0;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
