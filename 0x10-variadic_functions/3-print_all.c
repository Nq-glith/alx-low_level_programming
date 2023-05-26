#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * integer_print - function that prints integers
 * @args: arguments
 *
 * Return: a void funvtion
 */
void integer_print(va_list args)
{
	printf("%d", va_arg(args, int));
}
/**
 * char_print - function that prints charecters
 * @args: arguments
 *
 * Return: a void function
 */
void char_print(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * string_print - function that prints strings
 * @args: arguments
 *
 * Return: a void function
 */
void string_print(va_list args)
{
	char *string;

	string = va_arg(args, char *);
	if (string == NULL)
		s = "(nil)";
	printf("%s", s);
}
/**
 * float_print - function thar prints floats
 * @args: arguments
 *
 * Return: a void function
 */
void float_print(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * print_all - prints anything
 * @format: parameters
 * Return: void function
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int a, c;
	char *seperator;
	args_t arguments[] = {
		{"c", char_print},
		{"i", integer_print},
		{"f", float_print},
		{"s", string_print},
		{NULL, NULL}
	};
	va_start(args, format);
	a = 0;
	separator = "";
	while (format != NULL && *(format + a) != '\0')
	{
		c = 0;
		while (c < 4)
		{
			if (*(format + a) == *(arguments[c]).format)
			{
				printf("%s", separator);
				arguments[c].function(args);
				separator = ", ";
			}
			c++;
		}
		a++;
	}
	printf("\n");
	va_end(args);
}
