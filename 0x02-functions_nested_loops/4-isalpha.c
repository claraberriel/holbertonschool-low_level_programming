#include "holberton.h"

/**
 * _isalpha - compiler is not gonna like this description anyway
 * Return: 1 if letter, else 0
 */

int _isalpha(int c)
{
if (c > 64 && c < 123)
{
return (1);
}
else
{
return (0);
}
}
