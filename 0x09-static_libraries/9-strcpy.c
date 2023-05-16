#include "main.h"

/**
 * *_strcpy - copies the string pointed to by
 * src, including the terminating null byte
 * \0 to the buffer pointed by dest
 * @src: pointer
 * @dest: input pointed to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];

	return (dest);
}
