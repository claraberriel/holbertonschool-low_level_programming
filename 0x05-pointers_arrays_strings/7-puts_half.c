#include "holberton.h"
#include "2-strlen.c"

/**
 * puts_half - half of a string
 * @str: pointer to string
 * Return: half of string
 */

void puts_half(char *str)
{
int i, length, start, n;
length = _strlen(str);
start = length / 2;
n = (length - 1) / 2;

if (length % 2 == 0)
for (i = start; i <= length; i++)
{
_putchar(str[i]);
}

else
for (i = n; i <= length; i++)
{
_putchar(str[i]);
}

_putchar('\n');
}
