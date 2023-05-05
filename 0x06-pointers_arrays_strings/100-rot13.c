#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * use if statement once
 * use two loops only
 * do not use switch or any ternary operation
 * @str: string to be checked
 * Return: result
 */
char *rot13(char *str)
{
	char *result = str;
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 13 && str[i] >= 'a' && str[i] <= 'z'; j++)
		{
			str[i]++;
		}
		if (str[i] > 'z')
		{
			str[i] = 'a';
		}
	}
	for (j = 0; j < 13 && str[i] >= 'A' && str[i] <= 'Z'; j++)
	{
		str[i]++;
		if (str[i] > 'Z')
		{
			str[i] = 'A';
		}
	}
	return (result);
}
