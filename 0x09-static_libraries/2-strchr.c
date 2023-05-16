#include "main.h"
#include <string.h>

/**
 * *_strchr - locates charecter in a string
 * returns a pointer to the first occurance of the
 * charetcter c in the string s or NULL if
 * the charecter is not found
 * @s: string/pointer to c
 * @c: charecter in the string s
 * Return: pointer to c if found or NULL if not
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
