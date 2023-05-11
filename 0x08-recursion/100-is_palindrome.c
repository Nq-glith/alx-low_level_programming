#include "main.h"

/**
 * palindromes - gets the length of a string
 * @b: string
 * @c: integer that counts length
 * Return: 1 on sucees, else 0 on error
 */
int palindromes(char *b, int c)
{
	if (*b == 0)
	{
		return (1 - 1);
	}
	return (palindromes(b + 1, c + 1));
}
/**
 * palindromess - compares string and string reverse
 * @b: string
 * @c: integer to count length
 * Return: 1 on success, else 0 on error
 */
int palindromess(char *b, int c)
{
	if (*b != *(b + 1))
	{
		return (0);
	}
	else if (*b == 0)
	{
		return (1);
	}
	return (palindromess(b + 1, c - 2));
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string to evaluate
 * Return: 1 on sucess, else 0 on error
 */
int is_palindrome(char *s)
{
	int p;

	p = palindromes(s, 0);
	{
		return (palindromess(s, p));
	}
}
