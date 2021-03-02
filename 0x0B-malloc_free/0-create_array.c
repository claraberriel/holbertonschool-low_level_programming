#include "holberton.h"
#include <stdio.h>
#include <sdlib.h>

/**
 * create_array - Creates array of chars
 * @size: size
 * @c: pointer to string
 * Return: pointer to array, NULL if fail or size = 0
 */

char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

arr = malloc(size * sizeof(char));

if (arr == NULL)
return (NULL);

for (i = 0; i < size; i++)
{
arr[i] = c;
}


if (size == 0)
return (NULL);

return (arr);
}
