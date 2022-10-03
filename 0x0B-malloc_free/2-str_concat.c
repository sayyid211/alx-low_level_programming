#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings using malloc
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to a new concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j; /* looping variable */
	char *p; /* space to hold the new string*/

	while (1)
	{
		p = malloc((_strlen(s1) + _strlen(s2) + 1) * sizeof(char));
		if (p == NULL)
			return (NULL);
		if (s1 != NULL)
		{
			for (i = 0; i < _strlen(s1); i++)
			{
				p[i] = s1[i];
			}
		}
		i = _strlen(s1);
		if (s2 != NULL)
		{
			for (j = 0; j < _strlen(s2); j++)
			{
				p[i + j] = s2[j];
			}
		}
		p[i + j + 1] = '\0';
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
