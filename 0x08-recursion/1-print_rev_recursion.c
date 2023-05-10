#include "main.h"

/**
 * _print_rev_recursion - preints a string
 * in reverse
 * @s: represents the string you want to print
 * in reverse order
 * Return: 1 on succs else -1 on error
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
