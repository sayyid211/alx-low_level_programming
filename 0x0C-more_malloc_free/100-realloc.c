#include "main.h"

/**
 * _realloc - reallocates memspace using malloc and free
 *
 * @ptr: pointer to previously allocated memspace\
 * @old_size: old size
 * @new_size: new size
 * Return: reallocated memspace
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *aux;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		return (s);
	}

	s = malloc(new_size);
	if (s == NULL)
		return (NULL);

	aux = ptr;
	for (i = 0; i < old_size; i++)
		s[i] = aux[i];

	free(ptr);
	return (s);
}
