#include "main.h"

/**
 * show - print characters to stdout
 */

void show(void)
{
	int i = 0;
	char str[8] = "_putchar";

	while (str[i] != '\n')
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * main - Entry point
 * Return: Success
 */

int main(void)
{
	show();
	_putchar('\n');
	return (0);
}
