#include "variadic_functions.h"

/**
 * print_all - print all args
 * @format: list of arg types
 */

void print_all(const char * const format, ...)
{
	va_list val;
	int r, counter = 0;
	char p, *s, *separator = "";
	double q;

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
				if (!s)
					printf("(nil)");
				printf("%s%s", separator, s);
				break;
			default:
				break;
			}
			separator = ", ";
			counter++;
		}
	}
	printf("\n");
	va_end(val);
}
