#include "holberton.h"

/**
 * print_rev - print backwards
 * @s: string
 * Return: 0 if correct
 */

void print_rev(char *s)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{

}

for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
