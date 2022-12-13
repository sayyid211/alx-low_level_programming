#include "dog.h"
/**
 * free_dog - frees a dog
 *
 * @d: dog to clear
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
