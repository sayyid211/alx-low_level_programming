#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>
/**
 * print_all - print all args
 * @format: list of arg types
 */

void print_all(const char * const format, ...)
{
	va_list val;
	int val_num = strlen(format);
	int r, counter = 0;
	char p;
	double q;
	char *s;

	va_start(val, format);
	while (counter < val_num)
	{
		switch (format[counter])
		{
		case 'c':
			p = va_arg(val, int);
			printf("%c", p);
			break;
		case 'f':
			q = va_arg(val, double);
			printf("%f", q);
			break;
		case 'i':
			r = va_arg(val, int);
			printf("%d", r);
			break;
		case 's':
			s = va_arg(val, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
			break;
		default:
			break;
		}
		if (counter < val_num - 1)
			printf(", ");
		counter++;
	}
	printf("\n");
}
