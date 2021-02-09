#include "holberton.h"

/**
 * jack_bauer - Print every minute of every hour
 * Return: 0 if correct
 */

void jack_bauer(void)
{
int h, hh, m, mm, max = 10;
for (h = 0; h < 3; h++)
{
for (hh = 0; hh < max; hh++)
{
for (m = 0; m < 6; m++)
{
for (mm = 0; mm < 10; mm++)
{
if (h == 2)
{
max = 4;
}
_putchar(h + '0');
_putchar(hh + '0');
_putchar(':');
_putchar(m + '0');
_putchar(mm + '0');
_putchar('\n');
}
}
}
}
}
