#include <stdio.h>

/**
 * main - entry point
 *
 * @argc: arguments count
 * @argv: arguments vector
 * Return: Success
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int count = 0;

	while (count < argc - 1)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}
