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
	int idx = 0; /* index length*/


	while (src[i++])
		idx++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = idx; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
