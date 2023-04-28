#include "main.h"

/**
 * print_line - draws straight line
 * function that draws a straight line on the terminal
 * @n: number of times line should be printed
 * Return: 0
 */
void print_line(int n)
{
	int s;

	for (s = 0; s < n; s++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
