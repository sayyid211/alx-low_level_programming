#include "main.h"

/**
 * leet - Encodes a str to 1337
 * @str: str to encode
 * Return: pointer to cipher text
 */

char *leet(char *str)
{
	int x = 0, y;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[x])
	{
		for (y = 0; y <= 7; y++)
		{
			if (str[x] == leet[y] || str[x] - 32 == leet[y])
				str[x] = y + '0';
		}
		x++;
	}
	return (str);
}
