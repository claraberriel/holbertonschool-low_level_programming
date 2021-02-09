#include "holberton.h"

/*
* _islower - check for lowercase
* Return: 1 if lower, else 0
*/

int _islower(int c)
{

if (c < 123 && c > 96)
{
return (1);
}
else
{
return (0);
}
}
