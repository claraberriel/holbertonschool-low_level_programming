#include "holberton.h"

/**
 * print_triangle - Prints triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
int rows, space, hash;

if (size > 0)

for (rows = 1; rows <= size; rows++)
{

for (space = size - rows; space > 0; space--)
{
_putchar(' ');
}

for (hash = 1; hash <= rows; hash++)
{
_putchar('#');
}


_putchar('\n');
}

else
_putchar('\n');

}
