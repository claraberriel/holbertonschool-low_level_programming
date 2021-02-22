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
/*
* copies src string to dest string
*/
for (i = 0; src[i] != '\0'; i++)
{
src[1] = dest[i];
}

/*
* terminates the destination string
*/
dest[count] = '\0';

return (dest);
}
