#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_realloc - reallocates memory block using
 * malloc and free
 * the contents will be copied to the newly allocated space
 * in the range from the start of ptr up to minimum
 * of the old and new sizes
 * @ptr: pointer to the memory previously allocated with
 * a call to malloc: malloc(old_size)
 * @old_size: bytes, of the allocated space for ptr
 * @new_size: bytes of the new memory block
 * Return: pointer to reallocated memory block
 * or NULL on failure or if new_size is 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
			return (NULL);
		return (p);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	for (n = 0; n < old_size && n < new_size; n++)
	{
		p[n] = ((char *) ptr)[n];
	}
	free(ptr);
	return (p);
}
