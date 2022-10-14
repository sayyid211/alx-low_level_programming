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
	/*int val_num = strlen(format);*/
	int r, counter = 0;
	char p;
	double q;
	char *s;
	char *separator = "";

	va_start(val, format);
	if (format)
	{
		while (format[counter])
		{
			switch (format[counter])
			{
			case 'c':
				p = va_arg(val, int);
				printf("%s%c", separator, p);
				break;
			case 'f':
				q = va_arg(val, double);
				printf("%s%f", separator, q);
				break;
			case 'i':
				r = va_arg(val, int);
				printf("%s%d", separator, r);
				break;
			case 's':
				s = va_arg(val, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s%s", separator, s);
				}
				break;
			default:
				break;
			}
			separator = ", ";
			counter++;
		}
	}
	va_end(val);
	printf("\n");
}
