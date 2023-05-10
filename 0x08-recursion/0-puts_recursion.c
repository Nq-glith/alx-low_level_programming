#include "main.h"

/**
 * _puts_recursion - prints a string and  new line
 *
 * @s: parameter which represents the string to be printed
 * Return: On success 1
 * On error, return -1
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
