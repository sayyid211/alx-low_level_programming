#include "main.h"
/**
 * jack_bauer - print 24hrs
 */
void jack_bauer(void)
{
	int x;
	int y;

	for (x = '0'; x < '24'; x++)
	{
		for (y = '0'; y < '60'; y++)
		{
			if (x < 10)
			{
				_putchar('0');
				_putchar(x);
				_putchar(':');
				if (y < 10)
				{
					_putchar('0');
					_putchar(y);
				}
				else
				{
					_putchar(48 + y);
				}
			}
			else
			{
				_putchar(48 + x);
				_putchar(58);
				if (y < 10)
				{
					_putchar(48);
					_putchar(48 + y);
				}
				else
				{
					_putchar(48 + y);
				}
			}
			_putchar('\n');
		}
	}
}
