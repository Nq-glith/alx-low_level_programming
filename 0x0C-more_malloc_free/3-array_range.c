#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * the array should contain all the values from min (included)
 * to max (included), ordered from min to max
 * @min: minimum arrays
 * @max: maximum arrays
 * Return: pointer to newly created array
 * if min is greater than max, return NULL
 * if malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *p, d = 0;

	if (min > max)
		return (NULL);
	p = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[d] = min;
		d++;
		min++;
	}
	return (p);
}
