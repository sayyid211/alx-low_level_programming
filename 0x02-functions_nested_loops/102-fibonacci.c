#include "main.h"

/**
 * main - Entry point
 * Return: Success
 */

int main(void)
{
	int count = 0;
	int x = 0;
	int y = 1;
	int z = 0;

	while(count < 49)
	{
		printf("%u, ", y);
		z = x + y;
	        x = y;
		y = z;
		count ++;
	}
	printf("%u", y);
	putchar('\n');
	return (0);
}
