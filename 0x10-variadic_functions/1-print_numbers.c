#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: Always 0.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list list;
	unsigned int i;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i != (n - 1))
			printf("%i, %s", va_arg(list, int), separator);
		else
			printf("%i", va_arg(list, int));
	}

	va_end(list);
	printf("\n");
}

