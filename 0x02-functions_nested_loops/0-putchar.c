#include "main.h"
/**
 * putchar - print characters to stdout
 */

void putchar(void)
{
	int i = 0;
	char str[] = "_putchar";

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
	putchar();
	_putchar('\n');
	return (0);
}
