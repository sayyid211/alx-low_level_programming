#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sums of 2 diagonals
 * @a:matrix
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i; /* length of matrix */
	int j; /* width of matrix */
	int sum1 = 0; /* sum of first diagonal */
	int sum2 = 0; /* sum of 2nd diagonal */

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[i];
		}
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if ((i + j) == (size - 1))
				sum2 += a[i];
		}
	}
	printf("%d, %d, \n", sum1, sum2);
}
