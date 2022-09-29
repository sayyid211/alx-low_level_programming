#include "main.h"

/**
 * _print_rev_recursion - recursively print a string in reverse
 * @s: arg
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
