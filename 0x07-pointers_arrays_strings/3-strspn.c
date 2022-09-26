#include "main.h"
/**
 * _strspn - computes length of substring
 * @s: main str
 * @accept: substring
 * Return: length of substr
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int q = 0; /* counter for accept in s */
	int i = 0;
	int j = 0;

	for (; accept[i] != '\0'; i++)
	{
		for (; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				q += 1;
				break;
			}
		}
		j = 0;
	}
	return (q);
}
