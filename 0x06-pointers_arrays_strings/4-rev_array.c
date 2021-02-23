#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @a: array of int
 * @n: the number of elements to swap
 */

void reverse_array(int *a, int n)
{
int end = n - 1, begin, temp; 

for (begin = 0; begin < end; begin++)
{
temp = a[end];
a[end] = a[begin];
a[begin] = temp;
end--;
}

}
