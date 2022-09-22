include "main.h"
#include <stdio.h>

/**
 * print_array - print part of an array
 * @a: array
 * @n: number if items to print
 */

void print_array(int *a, int n)
{
	int x = 0;
	int i = 0;

	while ((*(a + i) != 0) && x < n)
	{
		printf("%d", a[i]);
		if (x < n - 1)
		{
			printf(", ");
		}
		i++;
		x++;
	}
	printf("\n");
}
