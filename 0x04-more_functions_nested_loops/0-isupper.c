#include "main.h"

/**
 * _isupper - checks for upper case alphabets
 * @c: arg
 * Return: Success
 */

int _isupper(int c)
{
	if (c < 97)
		return (0);
	else
		return (1);
}
