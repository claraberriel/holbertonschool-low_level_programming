#include "holberton.h"
#include <stdio.h>

/**
 * is_prime_number - check if number is prime
 * @n: number
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
		return (prime(n, n - 1));
}

/**
 * prime - Helper function
 * Return: 1 if prime, 0 if not
 */

int prime(int n, int b)
{
	if (b == 1)
		return (1);
	if (n % b == 0)
		return (0);
	return (prime(n, b - 1));
}
