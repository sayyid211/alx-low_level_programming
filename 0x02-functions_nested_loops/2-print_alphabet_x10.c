#include "main.h"
/**
 * print_alphabet_x10 - print the alphabets in lower case 10x
 */

void print_alphabet_x10(void)
{
	int line_count = 0;
	char alpha = 'a';

	while (line_count < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		line_count++;
	}
}
