/* 
Write a function that concatenates two strings
* This function appends the src string to the dest string, overwriting the
* terminating null byte (\0) at the end of dest, and then adds
a terminating null byte
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
 *  _strcat - concatenates two strings
 * @src: source string = s2 in main
 * @dest: destination string = s1 in main
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
int count = 0, j;
/** 
 * stores the length of the destination string on the count variable
*/
while (dest[count] != '\0')
{
++count;
}

/**
 * concatenates source string to destination string
*/
for (j = 0; src[j] != '\0'; ++j, ++count)
{
dest[count] = src[j];
}

/**
 * terminates the destination string
*/
dest[count] = '\0';

return(0);

}
