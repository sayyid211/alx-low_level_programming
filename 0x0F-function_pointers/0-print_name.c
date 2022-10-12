#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: argument to print
 * @f: function pointer to print name
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
