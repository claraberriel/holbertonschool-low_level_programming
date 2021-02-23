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
while (str[i]) != '\0') 
{
i++;

/*
* check previous char and ASCII values for lowercase chars
*/
while (prev == ' ' || prev == '\t' || prev == '\0' || prev == ',' | prev == ';' | prev == '.' | prev == '!' | prev == '?' | prev == '"' | prev == '(' | prev == ')' | prev == '{' | prev == '}')
{
if (str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
}

}
return (str);
}
