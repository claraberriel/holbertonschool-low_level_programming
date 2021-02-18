#include "holberton.h"
#include "2-strlen.c"

/**
 * puts_half - half of a string
 * @str: pointer to string
 * Return: half of string
 */

void puts_half(char *str)
{
int i;
for (i = 0; i <= (_strlen(str) / 2); i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
