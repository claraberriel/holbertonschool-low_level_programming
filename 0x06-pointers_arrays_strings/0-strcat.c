/** Write a function that concatenates two strings
* This function appends the src string to the dest string, overwriting the 
* terminating null byte (\0) at the end of dest, and then adds a terminating null byte
* Returns a pointer to the resulting string dest
*
*gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-strcat.c -o 0-strcat
* Hello 
* World!
* Hello World!
* World!
* Hello World!
* Output:
*
* 
*/

#include "holberton.h"

/**
 * 
 * 
 */

char *_strcat(char *dest, char *src)