#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: str 1
 * @s2: str 2
 * Return: true or false
 */
int _strcmp(char *s1, char *s2)
{
	int x = 0;
	int y;

	while (*(s1 + x) != '\0' || *(s2 + x) != '\0')
	{
		if (s1[x] != s2[x])
		{
			y = (s1[x] - s2[x]);
			break;
		}
		else
		{
			y = (0);
		}
		x++;
	}
	return (y);
}
