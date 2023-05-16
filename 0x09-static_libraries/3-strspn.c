#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix
 * substring and returns the number of bytes in
 * the initial segment of s which consists of
 * only bytes from accpet
 * @s: substring
 * @accept: source string
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int c, d;

	for (d = 0; *(s + d); d++)
	{
		for (c = 0; *(accept + c); c++)
		{
			if (*(s + d) == *(accept + c))
				break;
		}
		if (*(accept + c) == '\0')
			break;
	}
	return (d);
}
