#include "main.h"

/**
 * print_sign - prints the sighn of a number
 * function that prints the sighn of a number
 *
 * @n: charecter from ASCII
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
