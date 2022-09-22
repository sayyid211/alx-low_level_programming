#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: the array's pointer
 * @n: size of the array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
