#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 *
 * @s: represents the string for which to find
 * the length
 * Return: 1 on success else -1 on error
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
