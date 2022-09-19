#include "main.h"

/**
 * _strlen - returns length of string
 * @s: arg
 * Return: strvlen
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*(s + counter) != '\n')
	{
		counter++;
	}
	return (counter);
}
