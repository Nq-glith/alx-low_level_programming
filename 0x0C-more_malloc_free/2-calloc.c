#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * it allocates memory for an array of nmemb elements
 * of size bytes each
 * @nmemb: number of array elemnts
 * @size: bytes allocated
 * Return: pointer to allocated memory, if nmemb or size is 0
 * return NULL, if malloc fails, return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *l;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = nmemb * size;
	l = malloc(b);
	if (l == NULL)
		return (NULL);
	while (a < b)
	{
		l[a] = 0;
		a++;
	}
	return (l);
}
