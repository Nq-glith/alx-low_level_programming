#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: prints opcodes in hexa
 * program that prints the opcodes of its own main fucntion
 * @argc: number of parameters
 * @argv: parameter vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (a = 0; a < n; a++)
	{
		printf("%02hhx", *((char *)main + a));
		if (a < n - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
