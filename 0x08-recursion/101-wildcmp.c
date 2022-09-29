#include "main.h"
int strlen(char *s);
/**
 * strlen - compute str len
 * @s: str
 * Return: length of s
 */

int strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (strlen(s + 1) + 1);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: arg
 * Return: true(1) or false(0)
 */

int is_palindrome(char *s)
{
	if (*strlen(s) == *s)
		return (1);
	else
		return (0);
	return (is_palindrome(*(s + 1)));
}
