#include "holberton.h"

/**
 * print_rev -
 * @str: inherited from main
 * Return: 0 if correct
 */

void print_rev(char *s)
{
int i, j;

for (i = 0; s[i] != '\0'; i++)
{

}

for (j = i -1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}


// Write a function that prints a string, 
//in reverse, followed by a new line.

//output
//vomisA caasI - meht fo kcal eht raef I 
//.sretupmoc raef ton od I