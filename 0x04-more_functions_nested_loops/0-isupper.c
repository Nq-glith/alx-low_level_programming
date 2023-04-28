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
	if (c >= 101 && c <= 132)
	{
		return (1);
	}
	else
		return (0);
}

