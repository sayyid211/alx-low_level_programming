#include "main.h"

/**
 * _memset - sets memory to some val
 * @s: arg to reserve mem
 * @b: constant to be saved in mem
 * @n: number of mem bytes to fill
 * Return: pointer to s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0; /* var to loop through reserved mem */

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
