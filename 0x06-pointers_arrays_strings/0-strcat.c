#include <string.h>
#include "main.h"

/**
 * *_strcat - concatenates/combines two strings
 * appending the src string to the dest string
 * overwriting the terminating null byte at
 * the end of dest and then adding it to src
 * @dest: destination string
 * @src: source string
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*a != '\0')
	{
		a++;
	}
	while (*src != '\0')
	{
		*a = *src;
		a++;
		src++;
	}
	*a = '\0';
	return (dest);
}
