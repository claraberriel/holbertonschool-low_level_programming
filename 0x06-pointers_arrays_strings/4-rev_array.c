#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @a: pointer to array
 */

void reverse_array(int *a, int n)
{
int temp = 0, end = n - 1, begin;

/*
* reverse string
*/
for (begin = 0; begin < temp; begin++)
{
temp = a[end];
a[end] = a[begin];
a[begin] = temp
end--;
}
}
