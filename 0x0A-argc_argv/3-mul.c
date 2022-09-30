#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: args count
 * @argv: args vector
 * Return: Success
 */

int main(int argc, char **argv)
{
	int x;
	int y;

	if (argc < 3)
	{
		y = 0;
		printf("Error\n");
		x = 1;
	}
	else
	{
		int a = atoi(argv[1]);
		int b = atoi(argv[2]);

		y = a * b;
		printf("%d\n", y);
		x = 0;
	}
	return (x);
}
