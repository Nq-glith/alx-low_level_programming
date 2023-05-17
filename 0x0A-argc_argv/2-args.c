#include "main.h"
#include <stdio.h>

/**
 * main - prints all argumets it recieves
 * all arguments should be printed, including the first one
 * only prints oneargument per line, ending in a new line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
