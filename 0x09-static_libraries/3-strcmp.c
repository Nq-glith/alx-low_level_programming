#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int counter = 0;

	while (s1[counter] == s2[counter])
	{
		if (s1[counter] == '\0')
		{
			return (0);
		}
		counter++;
	}

	return (s1[counter] - s2[counter]);
}
