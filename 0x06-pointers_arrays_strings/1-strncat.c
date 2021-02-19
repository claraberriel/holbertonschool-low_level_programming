/** Write a function that concatenates two strings.
*The _strncat function is similar to the _strcat function, 
* except that
* it will use at most n bytes from src; and
* src does not need to be null-terminated if it 
* contains n or more bytes
* Return a pointer to the resulting string dest
*
* gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-strncat.c -o 1-strncat
*
* Output:
*
* Hello 
* World!
* Hello W
* World!
* Hello W
* Hello WWorld!
* World!
* Hello WWorld!
*/

#include "holberton.h"

/**
 * 
 * 
 */

char *_strncat(char *dest, char *src, int n)