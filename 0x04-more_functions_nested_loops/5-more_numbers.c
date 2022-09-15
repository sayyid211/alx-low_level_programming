#include "main.h"

/**
 * more_numbers - prints numbers
 */

void more_numbers(void)
{
	char tens[] ={0,1,2,3,4,5,6,7,8,9,1,0,1,1,1,2,1,3,1,4};
	int i = 0;
	int c = 0;

	while (c < 10)
	{
		for (; i < 20; i++)
		{
			_putchar(tens[i]);
		}
		_putchar('\n');
		c++;
	}
	_putchar('\n');
}
