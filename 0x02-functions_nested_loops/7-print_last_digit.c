#include "holberton.h"

/**
 * print_last_digit - Print last digit.
 * @x: input
 * Return: value of last digit
 */

int print_last_digit(int x)
{
int z = x % 10;
if (z < 0)

z = -1 * z;
_putchar('0' + z);

return (z);
}
