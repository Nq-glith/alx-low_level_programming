#include "main.h"

/**
 * print_rev - prints a string
 * in reverse followed by a new line
 * @s: input
 * Return: 0
 */
void print_rev(char *s)
{
	int i, r, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	len = i;
	for (r = len - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
}
