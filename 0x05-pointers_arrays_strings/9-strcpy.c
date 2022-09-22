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

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
