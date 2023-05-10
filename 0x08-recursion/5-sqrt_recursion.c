#include "main.h"

int natural_sqrt_recursion(int n, int a);
/**
 * natural_sqrt_recursion - recursive function that
 * finds the square root of a number
 * @n: integer forwhich the square root is to be found
 * @a: iterator
 * Return: square root of n if found
 * -1 if not a perfect square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (natural_sqrt_recursion (n, 0));
}

/**
 * natural_sqrt_recursion - recursive function that finds
 * the square root of a number
 * @n: integer for which the square root is to be found
 * @a: iterator
 * Return: square root of n if found
 * -1 if not a perfect square
 */
int natural_sqrt_recursion(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	return (natural_sqrt_recursion(n, a + 1));
}
