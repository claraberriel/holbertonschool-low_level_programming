#include "holberton.h"

/*
* swap_int(int *a, int *b) - Swaps values
* @a: inherited from main
* @b: ""
*/

void swap_int(int *a, int *b)
{
int temp = *a;    
*a = *b;
*b = temp;
}
