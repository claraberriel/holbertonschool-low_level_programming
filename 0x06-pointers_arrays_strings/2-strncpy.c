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
for (n = 0; src[n] != '\0'; n++)
{
src[n] = dest[n];
}

/*
* terminates the destination string
*/
dest[n] = '\0';

return (dest);
}
