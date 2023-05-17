#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - takes first two integer arguments and prints product
 * @argc: count arguments
 * @argv: aray of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int b, c;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		c = 1;
		for (b = 1; b < 3; b++)
			c *= atoi(argv[b]);
		printf("%d\n", c);
	}
	return (0);
}
