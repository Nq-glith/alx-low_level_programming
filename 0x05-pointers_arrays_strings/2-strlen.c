#include "main.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 *
 * @s: input
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (0);
}
