/** Write a function that reverses the content of an array of integers.  
 * Where n is the number of elements of the array
 * 
 * gcc -Wall -pedantic -Werror -Wextra 4-main.c 4-rev_array.c -o 4-rev_array
 * 
 * Output:
 * 
 * 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
 * 1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
 */

#include "holberton.h"

/**
 * 
 * 
 */

void reverse_array(int *a, int n)