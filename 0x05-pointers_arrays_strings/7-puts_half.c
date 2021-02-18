// Write a function that prints half of a string, 
//followed by a new line.

#include "holberton.h"

void puts_half(char *str)
{
int i;
for (i = 0; i <= _strlen(str) / 2; i++)
{
_putchar(i);
}
_putchar('\n');
}
