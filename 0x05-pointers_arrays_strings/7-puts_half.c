#include "holberton.h"

/**
 * puts_half - half of a string
 * @str: pointer to string
 * Return: half of string
 */

void puts_half(char *str)
{
int i;
for (i = 0; i <= _strlen(str) / 2; i++)
{
_putchar(i);
}
_putchar('\n');
}
