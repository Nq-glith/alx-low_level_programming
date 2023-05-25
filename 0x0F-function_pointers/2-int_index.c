#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size of elements in an array
 * @cmp: pointer to a function of one of hte 3 in main
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) != 0)
			return (n);
	}
	return (-1);
}
