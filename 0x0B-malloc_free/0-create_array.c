#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars and
 * initializes it with a specific char
 * @size: unsigned int type
 * @c: char type
 * Return: Returns a pointer to the array created (Success)
 * on failure return NULL
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
	{
		return (NULL);
	}
	a = malloc((size) * sizeof(char));
	if (a == NULL)
	{
		return (NULL);
	}
	b = 0;
	while (b < size)
	{
		a[b] = c;
		b++;
	}
	a[b] = '\0';
	return (a);
}
