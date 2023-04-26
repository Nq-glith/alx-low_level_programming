#include "main.h"

/**
 * _islower - checks lowercase charecter, if input is
 * lowercase charecter or another case is printed
 * 0
 *
 * @c: represents the charecter in ASCII code
 * Retun: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
