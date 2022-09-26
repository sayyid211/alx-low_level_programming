#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: destination
 * @src: source
 * @n: num od bytes to copy
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0; /* var to hold loop cysles */

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
