#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_buffer - print a buffer
 *
 * @b: pointer
 * @size: bytes of the buffer
 * Return: string with all letters
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", b[i + j]);
			}
			else
			{
				printf("  ");
			}
			if (j % 2 != 0)
			{
				printf(" ");
			}
		}
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%c", isprint(b[i + j] ? b[i + j] : '.'));
			}			
		}
		printf("\n");
	}
}
