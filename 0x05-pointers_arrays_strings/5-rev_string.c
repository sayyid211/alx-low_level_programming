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
	*s = '\0';

	while (length >= 0)
	{
		s[i] = r[length];
		length--;
		i++;
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
