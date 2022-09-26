#include "main.h"
/**
 * _strpbrk - search occurance of a string
 * @s: str to search
 * @accept: str to look for
 * Return: pointer to bytes where str is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (NULL);

}
