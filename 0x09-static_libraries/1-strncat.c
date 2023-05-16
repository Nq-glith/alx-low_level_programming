#include <string.h>
#include "main.h"

/**
 * *_strncat - concatinates two strings
 * the function will use the maximum bytes from
 * src, so it does not need to be null terminated
 * if it contains n or more bytes
 * @dest: destination string
 * @src: source string
 * @n: specifies max charesterss to be copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *b = dest;
	int c = 0;

	while (*b != '\0')
	{
		b++;
	}

	while (*src != '\0' && c < n)
	{
		*b = *src;
		b++;
		src++;
		c++;
	}
	*b = '\0';

	return (dest);
}
