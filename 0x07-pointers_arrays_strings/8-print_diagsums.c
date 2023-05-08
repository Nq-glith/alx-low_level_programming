#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: matrix of integers
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int k, sumdiag1 = 0, sumdiag2 = 0;

	for (k = 0; k < size; k++)
	{
		sumdiag1 += a[k];
		a += size;
	}
	a -= size;
	for (k = 0; k < size; k++)
	{
		sumdiag2 += a[k];
		a -= size;
	}
	printf("%d, %d\n", sumdiag1, sumdiag2);
}
