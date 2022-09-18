#include "main.h"

/**
 * main - Entry point
 *
 * Return: Success
 */
int main(void)
{
	int x = 1;

	while (x <= 100)
	{
		if (x % 2 == 0 && x % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (x % 2 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 3 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", x);
		}
		x++;
	}
	return (0);
}
