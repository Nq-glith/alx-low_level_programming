#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * helper function for 3-get_op_func.c
 * this program is the entry point for a calculator
 * @argc: number of parameters
 * @argv: parameter vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x, x1, result;
	int (*p)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	x - atoi(argv[1]);
	x1 - atoi(argv[3]);

	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = p(x, x1);
	printf("d\n", result);
	return (0);
}
