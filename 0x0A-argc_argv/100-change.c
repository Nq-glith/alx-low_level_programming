#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n, o, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	result = 0;
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (o = 0; o < 5 && n >= 0; o++)
	{
		while (n >= coins[o])
		{
			result++;
			n -= coins[o];
		}
	}
	printf("%d\n", result);
	return (0);
}
