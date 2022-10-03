#include <unistd.h>
/**
 * _putchar - writes the char c to stdout
 * @c: char to print
 *
 * Return: Success(1) or error (0)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
