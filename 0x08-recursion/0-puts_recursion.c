#include "holberton.h"

/**
 * _puts_recursion - prints a string nl
 * @s: string
 * Return: nothing, it's a void function
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
