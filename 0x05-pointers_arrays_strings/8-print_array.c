#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of
 * integers
 * followed by a new line
 * @a: array
 * @n: elements of array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int e;

	for (e = 0; e < n; e++)
	{
		if (e == 0)
			printf("%d", a[e]);
		else
			printf(", %d", a[e]);
	}
	printf("\n");
}
