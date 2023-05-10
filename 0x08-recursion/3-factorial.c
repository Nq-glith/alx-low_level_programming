#include "main.h"

/**
 * factorial - returns the factorial of a given
 * number
 * note that the factorial of 0 is 1
 * @n: integer
 * Return: 1 on sucess else -1 if
 * n is lower that 0, to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
