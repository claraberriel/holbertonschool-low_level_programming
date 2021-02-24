#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - print a string in reverse
 * @s: string
 * Return: len
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (0);

	len = (_strlen_recursion(s + 1) + 1);

	return (len);
}
