#include "main.h"

/**
 * print_numbers - prints numbers 0123456789
 * function that prints 0 to 9 followed by new line
 *
 * Return: void
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	putchar('\n');
}
