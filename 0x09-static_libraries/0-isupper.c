#include "main.h"

/**
 * _isupper - checks for upper case
 * charecter
 * @c: charecter
 *
 * Return: 1 if c is upper case or otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
