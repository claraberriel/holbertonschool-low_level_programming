#include "holberton.h"

/**
 * print_line - Print char _
 * @n: inhereted
 * Return: void
 */

void print_line(int n)
{

int i;

if (n > 0)
{

for (i = 0; i < n; i++)
{
_putchar('_');
}

}
_putchar('\n');
}
