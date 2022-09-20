#include "main.h"

/**
 * rev_string - function for reversing string
 * @s: argument to keep string
 */

void rev_string(char *s)
{

	int length = _strlen(s) - 1;
	int i = 0;
	char *r = s;

	for (; length >= 0; length++)
	{
		while(*s)
		{
			s[i] = r[length];
			i++;
		}
	}
}
/**
 * _strlen - computes the length of a string
 * @s: argument, pointer int to string array
 * Return: size of string array
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != 0)
	{
		i++;
	}
	return (i);
}
