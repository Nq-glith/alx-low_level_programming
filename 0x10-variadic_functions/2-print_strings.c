#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings
 * @separator: string to be printed between strings
 * @n: number of strings to be passed to the function
 * @...: arguments
 * Return: 0
 * if separator is NULL, dont print it,
 * if one string is NULL print nil
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list box;
	unsigned int l;
	char *str;

	va_start(box, n);
	l = 0;
	while (l < n)
	{
		str = va_arg(box, char*);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (l != (n - 1) && separator != NULL)
			printf("%s", separator);
		l++;
	}
	printf("\n");
	va_end(box);
}
