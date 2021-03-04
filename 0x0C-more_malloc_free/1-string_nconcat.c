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
	char *sth;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	if (n >= strlen(s2))
		sth = s2;

	if (n < len)
		sth = s2[n];

	//  	strcat(char *s1, char *sth);
	ptr = malloc(sizeof(_strlen(char *s1) + 1) + sizeof(_strlen(char *sth) + 1))

// cpy to concat so original str are not modified
}
