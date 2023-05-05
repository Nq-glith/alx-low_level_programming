#include "main.h"

/**
 * *leet - encodes a string to 1337
 * Only use one if statement
 * only use two loops
 * do not use switch or any ternary operation
 * @t: initialized string
 * Return: t
 */
char *leet(char *t)
{
	char s[] = "aeotlAEOTL";
	char o[] = "4307143071";
	int i = 0;
	int j;

	while (*(t + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(t + i) == s[j])
			{
				*(t + i) = o[j];
			}
		}
		i++;
	}
	return (t);
}
