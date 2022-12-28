#include "main.h"

/**
 * is_numeric - checks if a character is a numeral
 * @n: arg to check
 * Return: true(1) or false(0)
 */

int is_numeric(unsigned int n)
{
	return (n >= '0' && n <= '9');
}


/**
 * _atoi - converts str to int
 *
 * @s: string to convert
 * Return: int val or 0
 */

int _atoi(char *s)
{
	unsigned int intval, i, sign;

	intval = 0;

	if (s[0] == '-')
		sign = -1;
	sign = 1;

	for (i = 0;s[i] != '\0'; i++)
	{
		intval = (s[i] - 48) + (intval * 10);

		if (s[i + 1] == ' ')
			break;
	}
	return (intval * sign);
}
