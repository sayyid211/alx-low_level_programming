#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates string, malloc applied
 * @str: string to duplicate
 *
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *p; /* var to hold the duplicate */
	int i = 0;

	if (str == NULL)
		return (NULL);
	while (1)
	{
		p = malloc((_strlen(str) + 1) * sizeof(char));
		if (p == NULL)
			return (NULL);
		for (; i < _strlen(str); i++)
		{
			p[i] = str[i];
		}
		return (p);
	}
}
/**
 * _strlen - returns str length
 * @s: str to count
 * Return: str length
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen(s + 1) + 1);
}
