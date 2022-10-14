#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers passed as args
 * @separator: the seperator of the numbers
 * @n: the number of nums to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list p;
	unsigned int i; /* iterator */

	va_start(p, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p, int));
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	va_end(p);
	putchar('\n');
}
