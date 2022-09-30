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
 * _strncat - conc two str with condition
 *
 * @dest: destination
 * @src: source
 * @n: limit
 * Return: Concatenated str
 */

char *_strncat(char *dest, char *src, int n)
{
	int joint = _strlen(dest) - 1;
	int i = 0; /* loop through index of src */

	while (dest[i] != '\0')
	{
		if (i < n)
		{
			dest[joint] = src[i];
			joint++;
			i++;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
