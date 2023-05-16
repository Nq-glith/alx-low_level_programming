#include "main.h"
#include <string.h>

/**
 * *_strstr - locates a substring
 * finds the first occurance of the substring needle
 * in the string haystack
 * terminating null bytes are not compared
 * @haystack: source string
 * @needle: substring
 * Return: poniter to begining of substring or
 * null if string is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int f;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		f = 0;
		if (haystack[f] == needle[f])
		{
			do {
				if (needle[f + 1] == '\0')
				return (haystack);
				f++;
			} while (haystack[f] == needle[f]);
		}
		haystack++;
	}
	return ('\0');
}
