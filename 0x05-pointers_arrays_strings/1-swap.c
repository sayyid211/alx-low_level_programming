#include "main.h"

/**
 * swap_int - swap int vals
 * @a: arg1
 * @b: arg2
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
