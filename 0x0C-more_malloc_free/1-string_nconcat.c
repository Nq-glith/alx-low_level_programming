#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer to a charecter array, represents 1st input string (destination)
 * @s2: pointer to a charecter array, represents 2nd input string (source)
 * @n: specifies the maximum number of charecters to concatenate from s2
 * Return: pointer to concatenated string or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int c1 = 0;
	unsigned int c2 = 0;
	unsigned int c3 = 0;
	unsigned int l = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[c1])
		c1++;
	while (s2[c3])
		c3++;
	if (n >= c3)
		l = c1 + c2;
	else
		l = c1 + n;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	c3 = 0;
	while (c2 < l)
	{
		if (c2 <= c1)
			str[c2] = s1[c2];
		if (c2 >= c1)
		{
			str[c2] = s2[c3];
			c3++;
		}
		c2++;
	}
	str[c2] = '\0';
	return (str);
}
