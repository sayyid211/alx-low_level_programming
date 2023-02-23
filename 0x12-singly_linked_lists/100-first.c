#include <stdio.h>

/**
 * _beforemain - prints a string before the main function is executed
 *
 **/
void __attribute__ ((constructor)) _beforemain(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
