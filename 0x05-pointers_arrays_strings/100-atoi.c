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
	sign = 1;
	i = 0;
	for (;s[i] != '\0'; i++)
	{
		intval = (s[i] - 48) + (intval * 10);

		if (s[i + 1] == ' ')
			break;
	}
	else if (s[i] == '-')
	{
		sign *= -1;
	}
	return (intval * sign);
}
