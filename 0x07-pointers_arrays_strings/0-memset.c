#include "main.h"
#include <string.h>

/**
 * *_memset - fills the first n byte of memory area
 * pointed by s with the constant byte b
 * @s: source string
 * @b: constant byte
 * @n: memory/ length of buffer
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(s + a) = b;
		a++;
	}
	return (s);
}
