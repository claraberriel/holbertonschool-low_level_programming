#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Always 0.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

	char *s;
	unsigned int i;
	va_list str;

	va_start(str, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(str, char *);

		if (s == NULL)
			printf("(nil)");
		else
		printf("%s", s);

		if (separator && i != (n - 1))
			printf("%s", separator);

	}
	va_end(str);
	printf("\n");
}
