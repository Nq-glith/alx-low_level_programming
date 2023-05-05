#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: number tested
 * Return: 0
 */
void print_number(int n)
{
	int i, j, digit, digit1, x;
	unsigned int temp, numchar, num;

	digit = 0;
	if (n < 0)
	{
		_putchar('-');
		temp = -n;
	}
	else
	{
		temp = n;
	}
	num = temp;

	while (num >= 10)
	{
		num = num / 10;
		digit++;
	}
	digit1 = digit + 1;
	x = 1;
	i = 1;
	while (i < digit1)
	{
		x = x * 10;
		i++;
	}
	j = x;
	while (j >= 1)
	{
		numchar = (temp / j) % 10;
		_putchar(numchar + '0');
		j = j / 10;
	}
}
