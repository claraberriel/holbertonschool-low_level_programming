//Write a function that prints every other character of a string, starting with the first character, 
//output: 02468

#include "holberton.h"

/**
 * puts2 - prints every other 
 * @str: string
 */

void puts2(char *str)
{
int n;
if (n % 2 == 0)
{
_putchar(str[n]);
}

_putchar('\n');
}