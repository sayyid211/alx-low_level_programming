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
	n = 0; /* iterator fot indeces */


	while (*src)

	{
		dest[n] = src[n];
		n++;
	}
	return (dest);
}
