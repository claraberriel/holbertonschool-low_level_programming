#include "holberton.h"

/**
 * rev_string - print string and reverse it
 * @s: string inherited from main
 * Return: 0 if correct
 */

void rev_string(char *s)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
_putchar(s[i]);
}
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
