#include <unistd.h>

/**
 * _putchar - write the charecter c to stdout
 * @c: charecter to print
 * Return: 1 if tru and 0 if false
 * On error, -1 return 
 */
int _putchar(char c)
{
	return (write(1, & c, 1));
}
