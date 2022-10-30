#include "main.h"

/**
 * get_endianness - get a machines endianness
 * Return: big (0) or little(1) endian
 */

int get_endianness(void)
{
	int x = 1;
	char *endian = (char *)&x;

	if (*endian == 1)
		return (1);
	return (0);
}
