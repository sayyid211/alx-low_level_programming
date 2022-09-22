#include "main.h"

/**
 * _strcpy - copy all str
 * @dest: destination
 * @src: source
 * Return: duplicate
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0; /* iterator */

	while (i < _strlen(src))
	{
		dest[i] = src[i];
		i++;
		if (src[i] == '\0')
			break;
	}
	return (dest);
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
