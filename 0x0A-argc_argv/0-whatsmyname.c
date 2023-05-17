#include "main.h"
#include <stdio.h>

/**
 * main - prints name of program followed by a new line
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
