#include "main.h"
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds positive numbers stored in an int
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int e, f, length, sum;
	char *ptr;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (e = 1; e < argc; e++)
		{
			ptr = argv[e];
			length = strlen(ptr);
			for (f = 0; f < length; f++)
			{
				if (isdigit(*(ptr + f)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[e]);
		}
	printf("%d\n", sum);
	}
	return (0);
}
