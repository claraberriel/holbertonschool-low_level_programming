#include "holberton.h"

/**
 * more_numbers - Prints 10 times numbers from 0 to 14 \n
 * _putchar - Prints
 * Return: void
 */

void more_numbers(void)
{

int x, t;

for (t = 1; t < 11; t++)

{
for (x = 0; x < 15; x++)

{
if (x >= 10)
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}

_putchar('\n');
}

}

