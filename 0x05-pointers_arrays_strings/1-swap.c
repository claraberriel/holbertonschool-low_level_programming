#include <stdio.h>
#include "holberton.h"

/**
* swap_int - Swaps values
* @a: inherited from main
* @b: ""
*
* Return: void.
*/

void swap_int(int *a, int *b)
{

int temp = *a;

*a = *b;
*b = temp;
}
