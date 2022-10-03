#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: arg count
 * @argv: arg vect
 * Return: sum of args
 */

int main(int argc, char **argv)
{
	int i = 1; /* count args starting from argv[1] */
	int y; /* return value */
	int sum = 0; /* sum of args */
	int x; /* instance of argv[i] */

	for (; i < argc; i++)
	{
		sum += argv[i];
	}
	if (__builtin_types_compatible_p(typeof(sum), int))
	{
		x = atoi(sum);
		y = 0;
	}
	else if (!sum)
	{
		x = 0;
		y = 0;
	}
	else
	{
		y = 1;
	}
	if (y == 1)
	{
		printf("Error\n");
	}
	else
	{
		printf("%d\n", sum);
	}
	return (y);
}
