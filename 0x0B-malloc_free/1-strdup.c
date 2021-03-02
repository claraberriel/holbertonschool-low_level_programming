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
unsigned int len, contador = 0;

if (str == NULL)
return (NULL);

len = _strlen(str);
str2 = malloc(sizeof(char) * (len + 1));

if (str2 == NULL)
return (NULL);

while (*(str + contador) != '\0')
{
*(str2 + contador) = *(str + contador);
contador++;
}
*(str2 + contador) = '\0';
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
