#include "main.h"

/**
 * _strlen - returns length of string
 * @s: arg
 * Return: strvlen
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != 0)
	{
		counter++;
	}
	return (counter);
}

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: co ncatenated str
 */

char *_strcat(char *dest, char *src)
{
	int joint = _strlen(dest) - 1;
	int i = 0;

	while (*(src + i) != '\0')
	{
		dest[joint] = src[i];
		joint++;
		i++;
	}
	return (dest);
}
