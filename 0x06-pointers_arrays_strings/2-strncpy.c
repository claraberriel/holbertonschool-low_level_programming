#include "holberton.h"

/**
 * _strncpy - copy a srting
 * @src: source string = s2 in main
 * @dest: destination string = s1 in main
 * @n: value
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int count = 0;
/*
 * stores the length (n) of the destination string on the count variable
 * and copies src string to dest string
*/
while (dest[count] != '\0' && count < n)
{
dest[count] = src[count];
++count;
}

/*
* terminates string
*/
dest[count] = '\0';

return (dest);
}
