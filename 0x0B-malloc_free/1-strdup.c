#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given
 * as a parameter
 * @str: pointer to string array
 * Return: pointer to duplicate string (success)
 * on failure or if insufficent memory available returns NULL
 */
char *_strdup(char *str)
{
	char *bee;
	int c, d;

	d = 0;
	if (str == NULL)
		return (NULL);
	c = 0;
	while (str[c] != '\0')
		c++;

	bee = malloc(sizeof(char) * (c + 1));

	if (bee == NULL)
		return (NULL);
	for (d = 0; str[d]; d++)
		bee[d] = str[d];
	return (bee);
}
