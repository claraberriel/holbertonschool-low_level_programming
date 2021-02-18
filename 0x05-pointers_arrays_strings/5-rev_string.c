#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - print string and reverse it
 * @s: string inherited from main
 * Return: 0 if correct
 */

void rev_string(char *s)
{
int counter = 0, marker = 0;
char aux[99];
while (*(s + counter))
{
*(aux + counter) = *(s + counter);
counter++;
}
while (counter >= 0)
{
*(s + counter) = *(aux + marker);
marker++;
counter--;
}

}
