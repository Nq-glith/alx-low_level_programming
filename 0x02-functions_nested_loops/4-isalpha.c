#include "main.h"

/**
 * _isalpha - checks for alphabetic charecter
 *
 * checks alphabetic charecter and returns 1 if
 * a letter, lowercase or lowercase
 * @c: represents chrecter in ASCII
 *
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
