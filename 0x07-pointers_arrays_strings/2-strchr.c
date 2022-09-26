#include "main.h"

/**
 * _strchr - search for a character in a string
 * @s: string to search
 * @c: char to find
 * Return: pointer to char or NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0; /* loop val */

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (0);
}
