#include "main.h"

/**
 * prime_for_sure - evaluates from 1 to n
 * @i: same as n
 * @j: iterates from 1 to n
 * Return: 1 on sucees, else 0
 */
int prime_for_sure(int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	else if (i % j == 0)
	{
		return (0);
	}
	return (prime_for_sure(i, j + 1));
}
/**
 * is_prime_number - checks for prime number
 * @n: input integer
 * Return: returns 1 if the input integer
 * is a prime number, otherwise returns 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_for_sure(n, 2));
}
