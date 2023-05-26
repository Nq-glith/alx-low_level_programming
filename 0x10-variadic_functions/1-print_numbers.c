#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print all the parameters
 * @separator: string
 * @n: the number of parameters
 * @...: variable arguments
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	i = 0;
	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, unsigned int));
		if (i < (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
