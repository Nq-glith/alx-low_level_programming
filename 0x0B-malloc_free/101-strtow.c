#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * count_word - helper function to count number of words in string
 * @s: string
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag = 0, c, w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
		{
			flag = 0;
		}
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}
	return (w);
}

/**
 * **strtow - splits a string into words
 * The function returns a pointer to an array of strings (words)
 * Each element of this array should contain a single word,
 * null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * @str: string
 * Return: pointer to string on success
 * NULL if str == NULL or str == ""
 * if fucntion fails return NULL
 */
char **strtow(char *str)
{
	char **ptr, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
	{
		len++;
	}
	words = count_word(str);
	if (words == 0)
	{
		return (NULL);
	}
	ptr = (char **) malloc(sizeof(char *) * (words + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				ptr[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	ptr[k] = NULL;
	return (ptr);
}
