#include "main.h"

/**
 * print_last_digit - prints last digit of
 * a number
 *
 * @i: input number as an integer
 * Return: 0
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
