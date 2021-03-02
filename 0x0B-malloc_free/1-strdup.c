#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to duplicated string
 * @str: pointer to string
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{

char *str2;
char *temp;
unsigned int len = _strlen(str);

if (str == NULL)
return (NULL);

str2 = malloc((sizeof(char) * len) + 1);

if (str2 == NULL)
return (NULL);

temp = str2;

while (*str != '\0')
{
*temp = *str;
++str;
++temp;
}
*temp = '\0';
return (str2);
}


/**
 * _strlen - length of a string
 * @s: pointer to string
 * Return: length of string
 */

int _strlen(char *s)
{
int len = 0;

while (s[len] != '\0')
{
len++;
}
return (len);
}
