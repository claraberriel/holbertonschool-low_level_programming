#include "holberton.h"
#include <stdio.h>

/**
 * is_palindrome - check if string is palindrome
 * @s: string
 * Return: palindrome
 */

int is_palindrome(char *s)
{
	int start = 0;
	int end = _strlen(s);

	return (palindrome(s, start, end - 1));
}

/**
 * palindrome - Function
 * Retunr: 0
 */


int palindrome(char *s, int start, int end)
{
	if (start <= end && s[start] == s[end])
		return (palindrome(s, start + 1, end - 1));

	if (start >= end)
		return (1);

	return (0);
}
