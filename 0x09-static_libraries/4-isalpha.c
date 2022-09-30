#include "main.h"

/**
 * _isalpha - checks if character is aA to zZ
 * @c: argument to test
 * Return: true or false
 */

int _isalpha(int c)
{
	return ((c > 96 && c < 123) || (c > 64 && c < 91));
}
