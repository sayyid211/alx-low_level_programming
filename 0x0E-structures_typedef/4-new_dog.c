#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @str: string to measure
 * Return: the length of str
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * _strdup - duplicate a string
 * @str: str to duplicate
 * @copy: duplicate of str
 * Return: address to strcopy
 */
char *_strdup(char *str, char *copy)
{
	int i = 0; /* index of strings */

	for (; i < _strlen(str); i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
/**
 * new_dog - creates a new dog object
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name)));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner)));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strdup(name, dog->name);
	_strdup(owner, dog->owner);
	dog->age = age;
	return (dog);
}
