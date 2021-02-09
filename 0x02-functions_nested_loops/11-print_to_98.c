#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - All natural numbers up to 98
 * @n: start point
 * Return: 0 if correct
 */

void print_to_98(int n)
{

int i;

if (n < 99)

{

for (i = n; i < 99; i++)

{
if (i != 98)
printf("%d, ", i);

else if (i == 98)
printf("%d\n", i);

else
continue;
}


}

}
