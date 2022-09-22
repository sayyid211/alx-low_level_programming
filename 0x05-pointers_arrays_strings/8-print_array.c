#include "main.h"
#include <stdio.h>

/**
 * print_array - print part of an array
 * @a: array
 * @n: number if items to print
 */

void print_array(int *a, int n)
{
	int i = 0; /* itrator val */

	while (n !< 0 && i < (n - 1))
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[n - 1]);
}
