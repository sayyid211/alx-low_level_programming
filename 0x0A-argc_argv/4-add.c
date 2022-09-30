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
	int i = 1;
	int y;
	int sum = 0;
	int x;

	for (; i < argc; i++)
	{
		x = atoi(argv[i]);

		if (!x)
		{
			printf("0\n");
			y = 1;
		}

		else if (__builtin_types_compatible_p(typeof(x), int))
		{
			sum += x;
			y = 0;
		}
		else
		{
			printf("Error\n");
			y = 1;
			break;
		}
	}
	printf("%d\n", sum);
	return (y);
}
