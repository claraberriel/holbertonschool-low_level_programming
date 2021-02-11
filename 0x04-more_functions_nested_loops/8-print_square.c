#include "holberton.h"

/**
 * print_square - Prints #
 * @size: size of sqaure
 */

void print_square(int size)
{
int i, t;

if (size > 0)
{

for (t = 0; t < size; t++)
{

for (i = 0; i < size; i++)
{
_putchar('#');
}

_putchar('\n');
}

}

else
_putchar('\n');

}
