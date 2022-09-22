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


	while (i < n && src[i] != '\0')

	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
