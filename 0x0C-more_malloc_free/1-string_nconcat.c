#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - strcat allocated
 * @s1: destination strin
 * @s2: source string
 * Return: pointer to newly allocated space in memory containing s1
 * and first n bytes of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
//	*_strcat(char *s1, char *s2);

	int len = 0;
	while (s2[len] != '\0')
	{
		++len;
	}

	if (n >= len)
		char *sth = char *s2;

}

/**
 *  _strcat - concatenates two strings
 * @src: source string = s2 in main
 * @dest: destination string = s1 in main
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, j;
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
	for (j = 0; src[j] != '\0'; ++j, ++count)
	{
		dest[count] = src[j];
	}

/*
 * terminates the destination string
 */
	dest[count] = '\0';

	return (dest);

}
