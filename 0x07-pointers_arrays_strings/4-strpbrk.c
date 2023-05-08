#include "main.h"
#include <ctype.h>

/**
 * *_strpbrk - searches a string for any set of bytes
 * locates thefirst occurance in the string s of
 * any of the bytes in the string accept and
 * returns pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such
 * byte is found
 * @s: source string
 * @accept: bytes to be searched for
 * Return: pointer to byte in s if found in accept or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int e;

	while (*s)
	{
		for (e = 0; accept[e]; e++)
		{
			if (*s == accept[e])
				return (s);
		}
		s++;
	}
	return ('\0');
}
