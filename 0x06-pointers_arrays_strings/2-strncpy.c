#include "main.h"

/**
 * _strncpy - copy str
 * @dest: receiving buffer
 * @src: source
 * @n: size limit
 * Return: copy of src
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0; /* iterator fot indeces */

	while (*(src + i) != '\0')
	{
		if (i < n)
		{
			dest[i] = src[i];
			i++;
		}
		else
		{
			break;
		}
	}
	return (dest);
}
