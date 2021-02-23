#include "holberton.h"

/**
 * cap_string - Capitalizes string
 * @str: string
 * * Return: str
 */

char *cap_string(char *str)
{
int i, prev = str[i] - 1;

/*
* iterates the sting
*/
while (str[i]) != '\0'){
i++;

/*
* check previous char and ASCII values for lowercase chars
*/
while (str[i] >= 'a' && str[i] <= 'z')
{

if (prev == ' ' || prev == '\t' || prev == '\0' || prev == ',')
str[i] -= 32;
if (prev == ';' || prev == '.' || prev == ')' || prev == '{' || prev == '}')
str[i] -= 32;
if (prev == '!' || prev == '?' || prev == '"' || prev == '(')
str[i] -= 32;
}

}
return (str);
}
