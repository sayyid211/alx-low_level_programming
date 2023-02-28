#include "main.h"

/**
 * print_space - print a number of spaces
 * @n: length of space
 */

void print_space(int n)
{
	while (n > 0)
	{
		_putchar(' ');
		n--;
	}
}

/**
 * print_char - prints a umber of # char
 * @n: number of # to print
 */

void print_char(int n)
{
	while (n > 0)
	{
		_putchar('#');
		n--;
	}
}

/**
 * print_triangle - prints a triangle
 * @size: number of # characters to print to triangle
 */

void print_triangle(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	y = size;
	for (x = 1; x <= size; x++)
	{
		print_space(y - 1);
		print_char(x);
		y--;
		_putchar('\n');
	}
}
