#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two numbers
 * @a: first input
 * @b: second input
 * Return: results of the addition
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtracts two numbers
 * @a: first input
 * @b: second input
 * Return: results of the subtraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - multiplies two numbers
 * @a: first input
 * @b: second input
 * Return: results of the multiplication
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	printf("Error\n");
	exit(100);
}
/**
 * op_mod - calulates the modulus
 * @a: first input
 * @b: second input
 * Return: result of operation
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
