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
	char *p = malloc((_strlen(str) + 1) * sizeof(char));
	int i = 0;

	while (i < _strlen(str))
	{
		p[i] = str[i];
		i++;
	}
	if (str == NULL)
		return (NULL);
	return (p);
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
