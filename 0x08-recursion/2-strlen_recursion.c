#include "main.h"

/**
 * _strlen_recursion - recursively computes length of a string
 * @s: argument
 * Return: Length of str
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return(_strlen_recursion(s + 1) + 1);
}
