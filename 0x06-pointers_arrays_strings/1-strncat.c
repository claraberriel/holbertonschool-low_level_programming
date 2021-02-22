/* 
* Write a function that concatenates two strings.
* The _strncat function is similar to the _strcat function,
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
 * _strncat - concatenates n characters of source string to destination string
 * @src: source string = s2 in main
 * @dest: destination string = s1 in main
 * @n: value
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
int count = 0, j, n;
/*
 * stores the length of the destination string on the count variable
*/
while (dest[count] != '\0')
{
++count;
}

/*
 * concatenates source string to destination string
*/
for (j = 0; j <= n; ++j, ++count)
{
dest[count] = src[j];
}

/*
* terminates the destination string
*/
dest[count] = '\0';

return (dest);

}
