#include "main.h"

/**
 * more_numbers - prints numbers
 */

void more_numbers(void)
{
	char t[] = "01234567891011121314";
	int i = 0;
	int c = 0;

	while (c < 10)
	{
		for (; i < 20; i++)
		{
			_putchar(t[i]);
		}
		i = 0;
		_putchar('\n');
		c++;
	}
	_putchar('\n');
}
