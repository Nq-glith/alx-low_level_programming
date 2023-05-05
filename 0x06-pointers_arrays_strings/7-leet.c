#include "main.h"

/**
 * *leet - encodes a string to 1337
 * Only use one if statement
 * only use two loops
 * do not use switch or any ternary operation
 * @str: stores input string
 * Return: lt
 */
char *leet(char *str)
{
	char *lt = str;
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (str[c] == 'a' || str[c] == 'A')
		{
			lt[c] = '4';
		}
		else if (str[c] == 'e' || str[c] == 'E')
		{
			lt[c] = '3';
		}
		else if (str[c] == 'o' || str[c] == '0')
		{
			lt[c] = '0';
		}
		else if (str[c] == 't' || str[c] == 'T')
		{
			lt[c] = '7';
		}
		else if (str[c] == 'l' || str[c] == 'L')
		{
			lt[c] = '1';
		}
	}

	return (lt);
}
