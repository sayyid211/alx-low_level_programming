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
	unsigned int intval = 0;
	int sign = 1;

	do
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			intval = (intval * 10) + (*s - '0');
		else if (intval > 0)
			break;
	} while (*s++);

	return (intval * sign);
}
