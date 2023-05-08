#include "main.h"
#include <string.h>

/**
 * *_memcpy - copies n bytes from memory area src
 * to memory are dest
 * @dest: destination
 * @src: source string
 * @n: allocated memory/length of buffer
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b = 0;

	while (n > 0)
	{
		b++;
		n--;
		dest[b] = src[b];
	}
	return (dest);
}
